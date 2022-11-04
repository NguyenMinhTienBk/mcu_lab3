/*
 * led_display.h
 *
 *  Created on: Oct 29, 2022
 *      Author: pc
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

void display7SEG(int num);

//const int MAX_LED = 4;
//int index_led = 0;0
//int led_buffer[4] = {1, 5, 0, 8};

void update7SEG(int index);
void updateLed12Buffer(int led12);
void updateLed34Buffer(int led34);
void SetOffVer();
void SetRedVer();
void SetGreenVer();
void SetYellowVer();

void SetOffHor();
void SetRedHor();
void SetGreenHor();
void SetYellowHor();
#endif /* INC_LED_DISPLAY_H_ */
