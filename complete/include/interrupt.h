#ifndef INTERRUPT
#define INTERRUPT

void enable_interrupts(void);
void disable_interrupts(void);
void touch_init(void);
void timer1_init(void);
void timer2_init(void);
void mango_interrupt_init(void);
void mango_timer_init(void);

#endif