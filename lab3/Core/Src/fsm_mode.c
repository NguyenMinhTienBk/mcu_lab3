/*
 * FSM_AUTOMATIC.c
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */

#include <fsm_mode.h>

void fsm_mode_run(){
	switch (status_mode){
	case INIT:
		status_mode = MODE1;
		status_ver = INIT;
		status_hor = INIT;
		status_led7seg = MODE1_led7seg_1;
		//setTimer1(500);
		break;
	case MODE1 :

//		if (timer1_flag == 1){
//			status = AUTO_GREEN;
//			setTimer1(500);
//		}
//
		if (isButtonflag(but1) == 1){
			status_mode = MODE2;
			//setTimer3(1000);
		}

		break;
	case MODE2:

//		if (timer1_flag == 1){
//
//			status = AUTO_YELLOW;
//			setTimer1(300);
//
//		}
//
		if (isButtonflag(but1) == 1){
			status_mode = MODE3;
			//setTimer3(1000);
		}

		break;
	case MODE3:

//		if (timer1_flag == 1){
//			status = AUTO_RED;
//			setTimer1(200);
//		}
//
		if (isButtonflag(but1) == 1){
			status_mode = MODE4;
			//setTimer3(1000);
		}

		break;
	case MODE4:
		if (isButtonflag(but1) == 1){
			status_mode = MODE1;
			status_ver = INIT;
			status_hor = INIT;
			status_led7seg = MODE1_led7seg_1;
			//setTimer3(1000);
		}
		break;
	default:
		break;
	}


}


