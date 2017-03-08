#include <stdio.h>

#include "lcd.h"
#include "util.h"
#include "graphics.h"
#include "s3c_uart.h"
#include "s3c6410.h"
#include "vic.h"

#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include "item.h"
#include "game.h"

/* Registers for timer interrupt */
#define BIT_TIMER2 (1<<25)
#define TINT_CSTAT_REG __REG(0x7f006044)
#define BIT_TIMER2_STAT (1<<7)
#define BIT_TIMER2_EN (1<<2)

/* Registers for touch interrupt  */
#define BIT_ADCEOC (1<<31)
#define BIT_ADC_PEN (1<<30)

extern GAME_STATE gameState;
extern int stage;

/* enable interrupt in CPU level */
void enable_interrupts(void){
  __asm__ __volatile__ ("mrs r0, cpsr");
  __asm__ __volatile__ ("bic r0, r0, #0x80");
  __asm__ __volatile__ ("msr cpsr_c, r0");
}

/* disable interrupt in CPU level */
void disable_interrupts(void){
  __asm__ __volatile__ ("mrs r0, cpsr");
  __asm__ __volatile__ ("orr r0, r0, #0x80");
  __asm__ __volatile__ ("msr cpsr_c, r0");
}

unsigned int timer1_isr_call_count = 0;
unsigned int touch_isr_call_count = 0;

void touchInterruptServiceRoutine(void){
  unsigned int temp;
  unsigned int temp2;

  if( !(VIC1RAWINTR_REG & 1<<30) )
    return;

  /* Disable any other interrupt */
  temp = VIC1INTENABLE_REG;
  VIC1INTENCLEAR_REG = 0xffffffff;

  temp2 = readl(ADCCON);
  temp2 |= 1;
  writel(temp2, ADCCON);
  writel(0xd4, ADCTSC);

  //printf ("Touch Detected\t");
  touch_isr_call_count ++;

  writel(0x1, ADCCLRINTPNDNUP);

  /* Enable other interrupts */
  VIC1INTENABLE_REG = temp;
}

void touchInterruptServiceRoutine2(void){
  unsigned int temp;
  int x, y;

  if( !(VIC1RAWINTR_REG & 1<<31) )
    return;

  /* Disable any other interrupt */
  temp = VIC1INTENABLE_REG;
  VIC1INTENCLEAR_REG = 0xffffffff;

  while( !(readl(ADCCON) & 1<<15) );
  
  x = readl(ADCDAT0) & 0x3ff;
  y = readl(ADCDAT1) & 0x3ff;

  x = (x - 201) * 800 / 652;
  y = (y - 326) * 480 / 375;

  if(x < 0)
    x = 0;
  else if(x > 800)
    x = 800;

  if(y < 0)
    y = 0;
  else if(y > 480)
    y = 480;

  if (gameState == MAIN) {
    if(200 < x && x < 257 && 240 - 63*3/2 < y && y < 240 + 63*3/2)
      startGame();
    else if(100 < x && x < 100 + 57 && 240 - 63*3/2 < y && y < 240 + 63*3/2)
      showCredit();
  }
  else if(gameState == GAME)
  {
    if(y > 120)
    setPlayerSpeed(x, y);
  else if(42 < x && x < 42 + 60 && 30 < y && y < 30 + 60)
    firePlayerBomb();
  }
  else if(gameState == CREDIT || gameState == ENDING)
  {
    if(800 - 102 < x && x < 800 && 480 - 102 < y && y < 480)
      initGame();
  }
  else if(gameState == GAMEOVER)
  {
    if(100 < x && x < 100 + 19 * 2 &&
      300 - 38 * 2 - 10 < y && y < 300 - 10)
    {
      stage--;
      initPlayer();
      startStage();
    }
    else if(100 < x && x < 100 + 19 * 2 &&
      300 + 10 < y && y < 300 + 38 * 2 + 10)
      initGame();
  }

  writel(0xd3, ADCTSC);
  writel(0x1, ADCCLRINT);
    
  /* Enable other interrupts */
  VIC1INTENABLE_REG = temp;
}

void mango_interrupt_init(void){
  VIC1INTENABLE_REG |= BIT_ADCEOC;
  VIC1INTENABLE_REG |= BIT_ADC_PEN;

  writel(0xffff, ADCDLY);
  writel(0xd3, ADCTSC);
  writel(0x7fc1, ADCCON); 

  VIC1VECTADDR30 = (unsigned)touchInterruptServiceRoutine;
  VIC1VECTADDR31 = (unsigned)touchInterruptServiceRoutine2;
}

extern int playerX, playerY, stageTime, playerPower, stage;

void timerInterruptServiceRoutine(void) {
  static unsigned int passed_time = 0;
  unsigned int temp;

  temp = VIC0INTENABLE_REG;
  VIC0INTENCLEAR_REG = 0xFFFFFFFF;

  if(gameState == GAME)
  {
    movePlayer();
    moveBullet();
    moveEnemy();
    moveItem();

    itemCollision();
    bulletCollision();
    
    fireEnemyBullet();

    if(passed_time % 12 == 0)
      firePlayerBullet();

    if(passed_time % (60 / stage) == 0)
      makeEnemy();
    
    passed_time++;
    if (passed_time == 180)
      passed_time = 0;

    stageTime++;

    if(stageTime > STAGE_MAX_TIME)
      goNextStage();
  }
  else if(gameState == CLEAR)
  {
    movePlayer();
    moveBullet();
    moveItem();

    itemCollision();

    if(playerX == 784)
      startStage();
  }
  else if(gameState == GAMEOVER)
  {
    moveBullet();
    moveEnemy();
    moveItem();
  }

  TINT_CSTAT_REG |= BIT_TIMER2_STAT;
  VIC0IRQSTATUS_REG |= BIT_TIMER2;

  VIC0INTENABLE_REG = temp;
}

void mango_timer_init() {
  TCFG0_REG = (TCFG0_REG & ~(0xFF << 8)) | (0x20 << 8);
  TCFG1_REG = (TCFG1_REG & ~(0xF << 8)) | (1 << 8);

  TCNTB2_REG = 1000000 / 60;

  TCON_REG |= (1 << 13);
  TCON_REG = (TCON_REG & ~(0xF << 12)) | (1 << 15) | (1 << 12);

  VIC0INTENABLE_REG |= BIT_TIMER2;
  TINT_CSTAT_REG |= BIT_TIMER2_EN;

  VIC0VECTADDR25 = (unsigned)timerInterruptServiceRoutine;
}

void interrupt_reset(void){
  VIC0INTENABLE_REG &= ~(BIT_TIMER2);
  TINT_CSTAT_REG &= ~(BIT_TIMER2_EN);
  VIC0VECTADDR25 = 0;
}