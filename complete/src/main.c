#include <stdio.h>
#include <string.h>
#include <s3c_uart.h>
#include <lcd.h>
#include "graphics.h"
#include "vic.h"
#include "frame.h"
#include "interrupt.h"

#include "game.h"

static void mango_hw_init(void)
{
	disable_interrupts();
	uart_init(1, 115200);
	lcd_init();
	gfx_init();
	mango_interrupt_init();
	mango_timer_init();
	enable_interrupts();
}

int main()
{
	mango_hw_init();
	initGame();

	while(1){
		frame_service();
	}

	return 0;
}