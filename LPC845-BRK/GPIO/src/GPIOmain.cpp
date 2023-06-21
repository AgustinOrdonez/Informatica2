/*
 * Copyright 2022 NXP
 * NXP confidential.
 * This software is owned or controlled by NXP and may only be used strictly
 * in accordance with the applicable license terms.  By expressly accepting
 * such terms or by downloading, installing, activating and/or otherwise using
 * the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to
 * be bound by the applicable license terms, then you may not retain, install,
 * activate or otherwise use the software.
 */

#include <cr_section_macros.h>

#include "Gpio.h"
#include "LPC845.h"

#define CLK_GPIO0 6
#define CLK_GPIO1 18
#define CLK_ICON 20

void initialize(){
	SYSCON->SYSAHBCLKCTRL0 |=(1<< CLK_GPIO0)| (1<< CLK_GPIO1)| (1<< CLK_ICON);

}


int main(void) {
	initialize();

	Gpio greenLED(Gpio::port1,0,Gpio::pushpull,Gpio::output,Gpio::low);
	Gpio blueLED(Gpio::port1,1,Gpio::pushpull,Gpio::output,Gpio::low);
	Gpio redLED(Gpio::port1,2,Gpio::pushpull,Gpio::output,Gpio::low);

	Gpio userSwitch(Gpio::port0,4,Gpio::repeater,Gpio::input,Gpio::low);


	greenLed.clrPin();
	blueLed.clrPin();
	redLed.clrPin();

	while(1){
		if(usetSwitch.getPin()){
			blueLED.setPin();
		}
		else{
			blueLED.clrPIN();
		}
	}


	return 0 ;
}