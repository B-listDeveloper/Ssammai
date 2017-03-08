#include <stdio.h>
#include "frame.h"
#include "s3c6410.h"
#include "lcd.h"
#include "util.h"
#include "graphics.h"

#include "../res/imgBackground1.h"
#include "../res/imgBackground2.h"
#include "../res/imgBackground3.h"
#include "../res/imgPlayer.h"
#include "../res/imgPlayerBullet.h"
#include "../res/imgEnemy1.h"
#include "../res/imgEnemy2.h"
#include "../res/imgEnemy3.h"
#include "../res/imgEnemyBullet.h"
#include "../res/imgSidebar.h"
#include "../res/imgItemLife.h"
#include "../res/imgItemBomb.h"
#include "../res/imgItemPower.h"
#include "../res/imgBombGauge.h"
#include "../res/imgOne.h"
#include "../res/imgTwo.h"
#include "../res/imgThree.h"
#include "../res/imgTitleScreen.h"
#include "../res/imgLogo.h"
#include "../res/imgStartButton.h"
#include "../res/imgCreditButton.h"
#include "../res/imgCredit.h"
#include "../res/imgGameover.h"
#include "../res/imgContinue.h"
#include "../res/imgYesButton.h"
#include "../res/imgNoButton.h"
#include "../res/imgEnding.h"

#include "../res/explosion1.h"
#include "../res/explosion2.h"
#include "../res/explosion3.h"
#include "../res/explosion4.h"
#include "../res/explosion5.h"
#include "../res/explosion6.h"
#include "../res/explosion7.h"
#include "../res/explosion8.h"

#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include "item.h"
#include "game.h"

static int frame_asserted = 0;

//vsync handling routines
//two frame buffers are serviced
//into lcd screen in an alternating manner
//to avoid tearing (strange vertical lines on the screen)
static unsigned fb_odd[S3CFB_SIZE];
static unsigned fb_even[S3CFB_SIZE];

extern int playerX, playerY, playerLife, playerBomb, playerPower, playerAppearance;
extern bullet playerBullet[];
extern bullet enemyBullet[];
extern enemy enemyArray[];
extern item itemArray[];
extern GAME_STATE gameState;
extern int stage;

int frame_is_asserted(void) {
	return frame_asserted;
}

void frame_set_fb(unsigned *fb) {
	unsigned ufb = (unsigned)fb;
	S3C_VIDW00ADD0B0 = ufb; 
	S3C_VIDW00ADD1B0 = S3C_VIDWxxADD1_VBASEL_F(ufb + 
		(PAGE_WIDTH + S3CFB_OFFSET) * S3CFB_VRES);
	S3C_VIDW00ADD2  = S3C_VIDWxxADD2_OFFSIZE_F(S3CFB_OFFSET) |
		S3C_VIDWxxADD2_PAGEWIDTH_F(PAGE_WIDTH);
}

void frame_init(void) {
	int i;

	for (i = 0; i < S3CFB_SIZE; i ++) {
		fb_odd[i] = 0xffffffff;
		fb_even[i] = 0xffffffff;
	}

	frame_set_fb(fb_even);
}

void frame_assert(void) {
	frame_asserted = 1;
}

static void drawGame(unsigned *fb);

void frame_service(void) {
	static int parity = 0;

	if (frame_asserted) {
		//it is guaranteed that it is asserted 60 times per sec
		//by lcd vsync timer interrupt
		unsigned *fb_shown;
		unsigned *fb_working;

		fb_shown = parity ? fb_odd : fb_even;
		fb_working = !parity ? fb_odd : fb_even;
		parity = !parity;

		//shows a framebuffer on screen
		frame_set_fb(fb_shown);
		//and working on the other frame buffer
		drawGame(fb_working);

		frame_asserted = 0;
	}
}

static void drawSidebar(unsigned *fb) {
	int i = 0;
	unsigned* num;

	gfx_bitblck_ext(fb, (unsigned *)imgSidebar,
				0, 0, S3CFB_HRES, S3CFB_VRES / 4,
				S3CFB_HRES, S3CFB_VRES,
				0, 0, 400, 60,
				imgSidebar_width, imgSidebar_height);

	for (i = 0; i < playerLife ; i++) {
		gfx_bitblck_ext(fb, (unsigned *)imgPlayer,
					126 + (62 * i), 45, 126 + (62 * i) + imgPlayer_width, 45 + imgPlayer_height,
					S3CFB_HRES, S3CFB_VRES,
					0, 0, imgPlayer_width, imgPlayer_height,
					imgPlayer_width, imgPlayer_height);
	}

	for(i=0; i<playerBomb; i++)
	{
		gfx_bitblck_ext(fb, (unsigned *)imgBombGauge,
					468 + (imgBombGauge_width * i + i) * 2, 36, 468 + (imgBombGauge_width * i + i) * 2 + imgBombGauge_width*2, 36 + imgBombGauge_height*2,
					S3CFB_HRES, S3CFB_VRES,
					0, 0, imgBombGauge_width, imgBombGauge_height,
					imgBombGauge_width, imgBombGauge_height);
	}

	switch(stage)
	{
	case 1:
		num = (unsigned*)imgOne;
		break;
	case 2:
		num = (unsigned*)imgTwo;
		break;
	case 3:
		num = (unsigned*)imgThree;
		break;
	default:
		num = (unsigned*)NULL;
		break;
	}

	if(num != NULL)
		gfx_bitblck_ext(fb, (unsigned *)num,
					662, 44, 662 + imgOne_width * 2, 44 + imgOne_height * 2,
					S3CFB_HRES, S3CFB_VRES,
					0, 0, imgOne_width, imgOne_height,
					imgOne_width, imgOne_height);
}

static void drawMainScreen(unsigned * fb)
{
	gfx_bitblck_ext(fb, (unsigned *)imgTitleScreen,
		0, 0, S3CFB_HRES, S3CFB_VRES,
		S3CFB_HRES, S3CFB_VRES,
		0, 0, imgTitleScreen_width, imgTitleScreen_height,
		imgTitleScreen_width, imgTitleScreen_height);

	gfx_bitblck_ext(fb, (unsigned *)imgLogo,
		600, 240 - imgLogo_height * 3, 600 + imgLogo_width * 6, 240 + imgLogo_height * 3,
		S3CFB_HRES, S3CFB_VRES,
		0, 0,  imgLogo_width, imgLogo_height,
		imgLogo_width, imgLogo_height);

	gfx_bitblck_ext(fb, (unsigned *)imgStartButton,
		200, 240 - imgStartButton_height*3/2, 200 + imgStartButton_width * 3, 240 + imgStartButton_height * 3 / 2,
		S3CFB_HRES, S3CFB_VRES,
		0, 0,  imgStartButton_width, imgStartButton_height,
		imgStartButton_width, imgStartButton_height);

	gfx_bitblck_ext(fb, (unsigned *)imgCreditButton,
		100, 240 - imgCreditButton_height*3/2, 100 + imgCreditButton_width * 3, 240 + imgCreditButton_height * 3 / 2,
		S3CFB_HRES, S3CFB_VRES,
		0, 0,  imgCreditButton_width, imgCreditButton_height,
		imgCreditButton_width, imgCreditButton_height);

	return;
}

static void drawBackground(unsigned* fb)
{
	static int i = 0;
	int x1, x2, y1, y2;
	unsigned* img;

	x1 = i / 2;
	x2 = (i / 2) + 80;
	y1 = 12;
	y2 = 48;

	if (x2 > 240) {
		i = 0;
		x1 = i / 2;
		x2 = (i / 2) + 80;
	}

	switch(stage)
	{
	case 1:
		img = (unsigned*)imgBackground1;
		break;
	case 2:
		img = (unsigned*)imgBackground2;
		break;
	case 3:
		img = (unsigned*)imgBackground3;
		break;
	default:
		img = (unsigned*)NULL;
		break;
	}
	
	if(img != NULL)
	gfx_bitblck_ext(fb, (unsigned *)img,
		0, 120, S3CFB_HRES, S3CFB_VRES,
		S3CFB_HRES, S3CFB_VRES,
		x1, y1, x2, y2,
		imgBackground3_width, imgBackground3_height);
				
	i++;
}

static void drawPlayer(unsigned* fb)
{
	int offset = imgPlayer_width / 2;

	if(playerAppearance < DEFAULT_PLAYER_X * 2 && (playerAppearance / 10) % 2 == 0)
		return;

	gfx_bitblck_ext(fb, (unsigned *)imgPlayer, 
			playerX - offset, playerY - offset, playerX + offset, playerY + offset,
			S3CFB_HRES, S3CFB_VRES,
			0, 0, imgPlayer_width, imgPlayer_height,
			imgPlayer_width, imgPlayer_height);
}

static void drawBullet(unsigned* fb)
{
	int i;

	for(i=0; i<PLAYER_BULLET_MAX; i++)
	{
		if(playerBullet[i].state == BULLET_ALIVE)
		{
			int offset;
			int x = playerBullet[i].x;
			int y = playerBullet[i].y;

			offset = imgPlayerBullet_width / 2;

			gfx_bitblck_ext(fb, (unsigned *)imgPlayerBullet, 
					x - offset, y - offset, x + offset, y + offset,
					S3CFB_HRES, S3CFB_VRES,
					0, 0, imgPlayerBullet_width, imgPlayerBullet_height,
					imgPlayerBullet_width, imgPlayerBullet_height);
		}
	}

	for(i=0; i<ENEMY_BULLET_MAX; i++)
	{
		if(enemyBullet[i].state == BULLET_ALIVE)
		{
			int offset;
			int x = enemyBullet[i].x;
			int y = enemyBullet[i].y;

			offset = imgEnemyBullet_width / 2;

			gfx_bitblck_ext(fb, (unsigned *)imgEnemyBullet, 
					x - offset, y - offset, x + offset, y + offset,
					S3CFB_HRES, S3CFB_VRES,
					0, 0, imgEnemyBullet_width, imgEnemyBullet_height,
					imgEnemyBullet_width, imgEnemyBullet_height);
		}
	}
}

static void drawEnemy(unsigned* fb)
{
	int i;
	unsigned *imgEnemy;

	switch(stage) {
	case 1:
		imgEnemy = (unsigned *)imgEnemy1;
		break;
	case 2:
		imgEnemy = (unsigned *)imgEnemy2;
		break;
	case 3:
		imgEnemy = (unsigned *)imgEnemy3;
		break;
	default:
		imgEnemy = (unsigned *)NULL;
		break;
	}

	if (imgEnemy == NULL)
		return;

	for(i=0; i<ENEMY_MAX_NUMBER; i++)
	{
		if(enemyArray[i].state == ENEMY_ALIVE)
		{
			int offset, start, end;
			int x = enemyArray[i].x;
			int y = enemyArray[i].y;

			offset = imgEnemy1_width / 2;

			start = 0;
			end = imgEnemy1_width;

			if(x < 16)
				start = 16 - x;

			if(x > 784)
				end = 16 - (784 - x);

			gfx_bitblck_ext(fb, (unsigned *)imgEnemy,
				x < 16? 0 : x - offset, y - offset, x > 784? 799 : x + offset, y + offset,
				S3CFB_HRES, S3CFB_VRES,
				start, 0, end, imgEnemy1_height,
				imgEnemy1_width, imgEnemy1_height);
		}
		else if(enemyArray[i].state == ENEMY_EXPLODING)
		{
			unsigned* img;
			int x = enemyArray[i].x;
			int y = enemyArray[i].y;
			int offset = explosion1_width / 2;

			switch(enemyArray[i].explosion / 4)
			{
			case 7:
				img = (unsigned*)explosion1;
				break;
			case 6:
				img = (unsigned*)explosion2;
				break;
			case 5:
				img = (unsigned*)explosion3;
				break;
			case 4:
				img = (unsigned*)explosion4;
				break;
			case 3:
				img = (unsigned*)explosion5;
				break;
			case 2:
				img = (unsigned*)explosion6;
				break;
			case 1:
				img = (unsigned*)explosion7;
				break;
			case 0:
				img = (unsigned*)explosion8;
				break;
			}
			gfx_bitblck_ext(fb, (unsigned *)img,
				x - offset, y - offset, x + offset, y + offset,
				S3CFB_HRES, S3CFB_VRES,
				0, 0, explosion1_width, explosion1_height,
				explosion1_width, explosion1_height);

			enemyArray[i].explosion--;

			if(enemyArray[i].explosion == 0)
				enemyArray[i].state = ENEMY_DEAD;
		}
	}
}

static void drawItem(unsigned *fb) {
	int i;

	for(i = 0; i < ITEM_MAX; i++)
	{
		if (itemArray[i].itemState == ITEM_ALIVE && 
			(itemArray[i].timeLimit > ITEM_TIMELIMIT / 4 || (itemArray[i].timeLimit / 10) % 2 == 0))
		{
			int x = itemArray[i].x;
			int y = itemArray[i].y;

			if (itemArray[i].itemType == LIFE)
				gfx_bitblck_ext(fb, (unsigned *)imgItemLife,
							x - ITEM_OFFSET, y - ITEM_OFFSET, x + ITEM_OFFSET, y + ITEM_OFFSET,
							S3CFB_HRES, S3CFB_VRES,
							0, 0, imgItemLife_width, imgItemLife_height,
							imgItemLife_width, imgItemLife_height);

			else if(itemArray[i].itemType == BOMB)
				gfx_bitblck_ext(fb, (unsigned *)imgItemBomb,
							x - ITEM_OFFSET, y - ITEM_OFFSET, x + ITEM_OFFSET, y + ITEM_OFFSET,
							S3CFB_HRES, S3CFB_VRES,
							0, 0, imgItemBomb_width, imgItemBomb_height,
							imgItemBomb_width, imgItemBomb_height);

			else if(itemArray[i].itemType == POWER)
				gfx_bitblck_ext(fb, (unsigned *)imgItemPower,
							x - ITEM_OFFSET, y - ITEM_OFFSET, x + ITEM_OFFSET, y + ITEM_OFFSET,
							S3CFB_HRES, S3CFB_VRES,
							0, 0, imgItemPower_width, imgItemPower_height,
							imgItemPower_width, imgItemPower_height);
		}
	}
}

static void drawCredit(unsigned *fb)
{
	gfx_bitblck_ext(fb, (unsigned *)imgCredit,
		0, 0, S3CFB_HRES, S3CFB_VRES,
		S3CFB_HRES, S3CFB_VRES,
		0, 0, imgCredit_width, imgCredit_height,
		imgCredit_width, imgCredit_height);
}

static void drawEnding(unsigned* fb)
{
	gfx_bitblck_ext(fb, (unsigned *)imgEnding,
		0, 0, S3CFB_HRES, S3CFB_VRES,
		S3CFB_HRES, S3CFB_VRES,
		0, 0, imgEnding_width, imgEnding_height,
		imgEnding_width, imgEnding_height);
}

static void drawGameover(unsigned* fb)
{
	gfx_bitblck_ext(fb, (unsigned *)imgGameover,
		700, 180 - imgGameover_height + 120, 700 + imgGameover_width*2, 180 + imgGameover_height + 120,
		S3CFB_HRES, S3CFB_VRES,
		0, 0, imgGameover_width, imgGameover_height,
		imgGameover_width, imgGameover_height);

	gfx_bitblck_ext(fb, (unsigned *)imgContinue,
		200, 180 - imgContinue_height + 120, 200 + imgContinue_width*2, 180 + imgContinue_height + 120,
		S3CFB_HRES, S3CFB_VRES,
		0, 0, imgContinue_width, imgContinue_height,
		imgContinue_width, imgContinue_height);

	gfx_bitblck_ext(fb, (unsigned *)imgYesButton,
		100, 300 - imgYesButton_height * 2 - 10, 100 + imgYesButton_width * 2, 300 - 10,
		S3CFB_HRES, S3CFB_VRES,
		0, 0, imgYesButton_width, imgYesButton_height,
		imgYesButton_width, imgYesButton_height);

	gfx_bitblck_ext(fb, (unsigned *)imgNoButton,
		100, 300 + 10, 100 + imgNoButton_width * 2, 300 + imgNoButton_height * 2 + 10,
		S3CFB_HRES, S3CFB_VRES,
		0, 0, imgNoButton_width, imgNoButton_height,
		imgNoButton_width, imgNoButton_height);
}

static void drawGame(unsigned *fb) {
	
	if(gameState == MAIN)
	{
		drawMainScreen(fb);
	}
	else if(gameState == CREDIT)
	{
		drawCredit(fb);
	}
	else if(gameState == GAME)
	{
		drawBackground(fb);
		drawSidebar(fb);
		drawPlayer(fb);
		drawBullet(fb);
		drawEnemy(fb);
		drawItem(fb);
	}
	else if(gameState == CLEAR)
	{
		drawBackground(fb);
		drawSidebar(fb);
		drawPlayer(fb);
		drawBullet(fb);
		drawEnemy(fb);
		drawItem(fb);
	}
	else if(gameState == GAMEOVER)
	{
		drawBackground(fb);
		drawSidebar(fb);
		drawBullet(fb);
		drawEnemy(fb);
		drawItem(fb);
		drawGameover(fb);
	}
	else if(gameState == ENDING)
	{
		drawEnding(fb);
	}
}

