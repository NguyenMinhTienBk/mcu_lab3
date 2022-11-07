/*
 * led_display.c
 *
 *  Created on: Oct 29, 2022
 *      Author: pc
 */
#include "led_display.h"
#include "main.h"
#include "global.h"
#include "software_timer.h"

void display7SEG(int num){
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
		break;
	default :
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);
		break;
	}
}

const int MAX_LED = 4;
// int index_led = 0;
int led_buffer[4] = {1, 5, 0, 8};
void update7SEG(int index){
    switch (index){
		case 0: {
			display7SEG(led_buffer[index]);
			break ;
		}
		case 1:{
			display7SEG(led_buffer[index]);
			break ;
		}
		case 2:{
			display7SEG(led_buffer[index]);
			break ;
		}
		case 3:{
			display7SEG(led_buffer[index]);
			break ;
		}
		default :
			break;
    }
}

void display7SEGLED12(int led1_2){
	updateLed12Buffer(led1_2);
//	SetLed7Seg1On();
//	update7SEG(0);
//	SetLed7Seg2On();
//	update7SEG(1);
	if (timer5_flag == 1){
		SetLed7Seg1On();
		update7SEG(0);
		setTimer5(250);
	}
	if (timer4_flag == 1){
		SetLed7Seg2On();
		update7SEG(1);
		setTimer4(250);
	}
//	if (timer4_flag == 1){
//		SetLed7Seg12On();
//		setTimer4(10);
//	}
	if (timer4_flag == 1){
		//SetLed7Seg34On();
		setTimer4(500);
	}
	//SetLed7Seg12On();
}

void display7SEGLED34(int led3_4){
	updateLed34Buffer(led3_4);
	if (timer4_flag == 1){
		//SetLed7Seg34On();
		setTimer4(500);
	}
	if (timer4_flag == 1){
		SetLed7Seg3On();
		update7SEG(2);
		setTimer4(250);
	}
	if (timer4_flag == 1){
		SetLed7Seg4On();
		update7SEG(3);
		setTimer4(250);
	}
//	if (timer4_flag == 1){
//		//SetLed7Seg34On();
//		setTimer4(250);
//	}

}

void display7Seg_countdown_Led12(){
	if(timer3_flag == 1){
		display7SEGLED12(led12);
		led12--;
		setTimer3(1000);
	}
}

void display7Seg_countdown_Led34(){
	if(timer4_flag == 1){
		display7SEGLED34(led34);
		led34--;
		setTimer4(1000);
	}
}

void updateLed12Buffer(int led1_2){
//	if (led12 < 10){
//		led_buffer[0] = 0;
//		led_buffer[1] = led12;
//	} else {
		led_buffer[0] = led1_2 / 10;
		led_buffer[1] = led1_2 % 10;
//	}
}
void updateLed34Buffer(int led3_4){
//	if (led34 < 10){
//		led_buffer[2] = 0;
//		led_buffer[3] = led34;
//	} else {
		led_buffer[2] = led3_4 / 10;
		led_buffer[3] = led3_4 % 10;
//	}
}

void updateLedBuffer(int led1_2,int led3_4){
	led_buffer[0] = led1_2 / 10;
	led_buffer[1] = led1_2 % 10;
	led_buffer[2] = led3_4 / 10;
	led_buffer[3] = led3_4 % 10;
}

void SetLed7Seg1On(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET );
}
void SetLed7Seg2On(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET );
}
void SetLed7Seg3On(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET );
}
void SetLed7Seg4On(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET );
}
void SetLed7Seg12On(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET );
	//HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET );
	//HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET );
}
void SetLed7Seg34On(){
	//HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET );
	//HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET );
}
void SetLed7SegallOn(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET );
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET );
}
void SetLed7SegallOff(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET );
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET );
}


void SetOffVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_SET);
}

void SetRedVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_SET);
}

void SetGreenVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_SET);
}

void SetYellowVer(){
	HAL_GPIO_WritePin(LED_RED_VER_GPIO_Port, LED_RED_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_VER_GPIO_Port, LED_GREEN_VER_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_VER_GPIO_Port, LED_YELLOW_VER_Pin, GPIO_PIN_RESET);
}


void SetOffHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_SET);
}

void SetRedHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_SET);
}

void SetGreenHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_SET);
}

void SetYellowHor(){
	HAL_GPIO_WritePin(LED_RED_HOR_GPIO_Port, LED_RED_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_HOR_GPIO_Port, LED_GREEN_HOR_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_HOR_GPIO_Port, LED_YELLOW_HOR_Pin, GPIO_PIN_RESET);
}
