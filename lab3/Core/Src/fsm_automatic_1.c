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

#include <fsm_automatic_1.h>
int temp = 0;

//int timeTimer(int time){
//	return time * 1000;
//}

void fsm_automatic_1_run(){
	switch (status_1){
	case INIT:

		SetOffVer();
		status_1 = AUTO_RED;
		//temp = timeredver * 1000;
		setTimer1(timeTimer(timered));
		break;
	case AUTO_RED:
		SetRedVer();
		if (timer1_flag == 1){
			status_1 = AUTO_GREEN;
			setTimer1(timeTimer(timegreen));
		}

//		if (isButton1flag() == 1){
//			status = MAN_RED;
//			setTimer1(1000);
//		}

		break;
	case AUTO_GREEN:

		SetGreenVer();
		if (timer1_flag == 1){
			status_1 = AUTO_YELLOW;
			setTimer1(timeTimer(timeyellow));
		}

//		if (isButton1flag() == 1){
//			status = MAN_GREEN;
//			setTimer1(1000);
//		}

		break;
	case AUTO_YELLOW:

		SetYellowVer();
		if (timer1_flag == 1){
			status_1 = AUTO_RED;
			setTimer1(timeTimer(timered));
		}
//		if (isButton1flag() == 1){
//			//button1_flag = 0;
//			status = MAN_YELLOW;
//			setTimer1(1000);
//		}
		break;
	default:
		break;
	}

}


