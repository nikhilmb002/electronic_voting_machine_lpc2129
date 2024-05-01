#include "header.h"

void blink_led(u32 led){

	IOSET0 |= 1 << 16;
	IODIR1 |= led;
	IOCLR1 |= led;
	delay_ms(200);
	IOSET1 |= led;

}