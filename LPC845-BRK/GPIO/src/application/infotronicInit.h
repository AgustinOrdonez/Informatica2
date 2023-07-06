#ifndef APPLICATION_INFOTRONICINIT_H_
#define APPLICATION_INFOTRONICINIT_H_

#include "types.h"
#include "Gpio.h"
#include "sysTick.h"
#include <list>


extern Gpio greenLED;
extern Gpio blueLED;
extern Gpio redLED;
extern Gpio userSwitch;



void infotronicInit();
void myCallback();



#endif /* APPLICATION_INFOTRONICINIT_H_ */
