/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>

int main(void)
{
	//commit from windows
    DDRC = 0b0000001;
	PORTC = 0b0000001;
    for(;;){
        /* insert your main loop code here */
    }
    return 0;   /* never reached */
}
