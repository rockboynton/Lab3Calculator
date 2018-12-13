/*
 * main.c
 *
 *  Starter Code
 */
#include <stdio.h>
#include <stdlib.h>
#include "uart_driver.h"
#include "led.h"

#define F_CPU 16000000UL


// main
int main(){

	// Initialize variables to be used 
	char c;

	// Initialize hardware
	init_usart2(19200,F_CPU);
	led_init();
	
	
	// Never return 
	while (1) {
		// Read char from user. Note: getchar() will grab the first char
		c = getchar();
		// The return will still be in the stream, so remove all extras to empty the stream.
		while (getchar() != '\n') {
			c = '0'; // If there was more than one character, it wwas an invalid command
		}
		switch (c) {
			case 'h': 
				printf("'h'\t Help/Display Interface\n"
           			   "'f'\t Flash Lights (10 times)\n"
           			   "'s'\t Scan lights (Once back and forth)\n"
           			   "'p'\t Print current speed (0-9)\n"
           			   "'+'\t Increase speed\n"
           			   "'-'\t Decrease speed\n"
           			   "'x'\t Turn off lights\n");
				break;
			case 'f': 
				led_flash(); 
				break;
			case 's': 
				led_scan(); 
				break;
			case 'p': 
				printf("Current Speed: %d\n", getCurrentSpeed()); 
				break;
			case '+': 
				led_incSpeed(); 
				break;
			case '-': 
				led_decSpeed(); 
				break;
			case 'x': 
				led_allOff(); 
				break;
			default:
				printf("Invalid Command.\n");
				break;
		}
	}

	// Never returns
	return 0;
}



