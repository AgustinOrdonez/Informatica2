#include <infotronicInit.h>
#include "LPC845.h"
#include "sysTick.h"

/**Constructores de los pines*/
Gpio greenLED(Gpio::port1, 0, Gpio::pushpull, Gpio::output, Gpio::low);
Gpio blueLED(Gpio::port1, 1, Gpio::pushpull, Gpio::output, Gpio::low);
Gpio redLED(Gpio::port1, 2, Gpio::pushpull, Gpio::output, Gpio::low);
Gpio userSwitch(Gpio::port0, 4, Gpio::repeater, Gpio::input, Gpio::low);

std::list <Callback*> callbackList;

void infotronicInit(){


	//PllInit();
	installSysTickCallback(myCallback);
	sysTickInit(1000);



}

void myCallback(){

	static uint32_t contador=0;
	contador++;

	contador %= 50;

	if(!contador){
		redLED.setTogglePin();
	}

}
