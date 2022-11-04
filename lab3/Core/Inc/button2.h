/*
 * button2.h
 *
 *  Created on: Oct 28, 2022
 *      Author: pc
 */

#ifndef INC_BUTTON2_H_
#define INC_BUTTON2_H_

#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton2flag();

void getKeyInput2();

#endif /* INC_BUTTON2_H_ */
