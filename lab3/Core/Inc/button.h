/*
 * button.h
 *
 *  Created on: Sep 24, 2022
 *      Author: pc
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "global.h"
//#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

//extern int button1_flag;
//int isButton1flag();
int isButtonflag(int index);
//extern int button1_flag;
void forgetkey();
//void getKeyInput(int i);
void getKeyInput();


#endif /* INC_BUTTON_H_ */
