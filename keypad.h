/*
 * keypad.h 
 * 
 * API for interfacing with the MSOE dev board keypad
 */

//Include Guards 
#ifndef KEYPAD_H_
#define KEYPAD_H_

#include <inttypes.h>

/**
 * Initialize the keypad GPIO port.
 */
void key_init();

/**
 * Returns a numeric code representing the button on the keypad that was pressed (1 to 16), or 0 if 
 * no button is pressed. 
 * 
 * @return uint8_t 
 *      numeric code representing the button on the keypad that was pressed
 */
uint8_t key_getKey_noBlock();

/**
 * Waits until a key on the keypad is pressed then returns the numeric code representing it (1 to 
 * 16), or 0 if no button is pressed. 
 * Returns after said key is released.
 * 
 * @return uint8_t 
 *      numeric code representing the button on the keypad that was pressed
 */
uint8_t key_getKey();

/**
 * Waits until a key on the keypad is pressed then returns the ASCII code corresponding to the key 
 * press.
 * Returns after said key is released.
 * 
 * @return uint8_t 
 *      ASCII code corresponding to the key press
 */
uint8_t key_getChar();


#endif
