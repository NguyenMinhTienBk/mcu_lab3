/*
 * FSM_AUTOMATIC.c
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */

/*
 * FSM_AUTOMATIC.c
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */

#include <fsm_mode.h>

void fsm_mode_run(){
	switch (status_1){
//	case INIT:
//		status = MODE1;
//		setTimer1(500);
//		break;
	case MODE1 :

//		if (timer1_flag == 1){
//			status = AUTO_GREEN;
//			setTimer1(500);
//		}
//
//		if (isButtonflag(but1) == 1){
//			status_1 = MODE2;
//			setTimer3(1000);
//		}

		break;
	case MODE2:

//		if (timer1_flag == 1){
//
//			status = AUTO_YELLOW;
//			setTimer1(300);
//
//		}
//
//		if (isButtonflag(but1) == 1){
//			status_1 = MODE3;
//			setTimer3(1000);
//		}

		break;
	case MODE3:

//		if (timer1_flag == 1){
//			status = AUTO_RED;
//			setTimer1(200);
//		}
//
//		if (isButtonflag(but1) == 1){
//			status_1 = MODE4;
//			setTimer3(1000);
//		}

		break;
	case MODE4:
//		if (isButtonflag(but1) == 1){
//			status_1 = MODE1;
//			setTimer3(1000);
//		}
		break;
	default:
		break;
	}


}


