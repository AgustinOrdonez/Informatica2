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


#include <infotronicInit.h>





int main(void) {
	infotronicInit();



    greenLED.clrPin();
    blueLED.clrPin();
    redLED.clrPin();

    while (1) {
        if(sysTickInterrupt){
        	blueLED.setTogglePin();
        	sysTickInterrupt=false;
        }
    }


    return 0;
}





