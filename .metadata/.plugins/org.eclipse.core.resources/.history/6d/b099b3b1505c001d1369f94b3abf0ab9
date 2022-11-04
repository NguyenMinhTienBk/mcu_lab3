/*
 * button2.c
 *
 *  Created on: Oct 28, 2022
 *      Author: pc
 */

#include "button2.h"

int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;
int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;

int TimeOutForKeyPress2 =  100;

int button2_flag = 0;

int isButton2flag(){

	if (button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess2(){
	if(KeyReg9 == PRESSED_STATE){
			button2_flag = 1 ;
	}
}

void getKeyInput2(){
	  KeyReg8 = KeyReg7;
	  KeyReg7 = KeyReg6;
	  //KeyReg6 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	  if ((KeyReg7 == KeyReg6) && (KeyReg7 == KeyReg8)){
	    if (KeyReg8 != KeyReg9){
	      KeyReg9 = KeyReg8;

	      if (KeyReg9 == PRESSED_STATE){
	        TimeOutForKeyPress2 = 100;
	        subKeyProcess2();
	      }
	    }else{
	       TimeOutForKeyPress2 --;
	        if (TimeOutForKeyPress2 == 0){
	          KeyReg9 = NORMAL_STATE;
	        }
	    }
	  }
}


