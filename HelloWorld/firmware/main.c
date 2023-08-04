/* Name: main.c
 * svoische 04.08.23
 * ATmega8 16U trial
 * Config: XCode in MacOS, AVRdude, USBasp
 * Atmel Studio compatibility:
 * Proteus sim under Winery:
 * Proteus sim in Windows:
 */

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL

int main(void)
{
	//first commit from windows: succeed
    DDRC =  0b0100000; //PC5: output

    while (1) {
        PORTC = 0b0100000;
        _delay_ms(500);
        PORTC = 0b0000000;
        _delay_ms(500);
    }
    return 0;   /* never reached */
}
