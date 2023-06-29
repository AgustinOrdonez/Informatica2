#include "sysTick.h"

bool sysTickInterrupt=false;

volatile void (*callbackFunc)(void) = nullptr ;


void sysTickInit(uint32_t periodoUs){



	uint32_t ticks = (FREQ_MCU_CLOCK/1000000) * periodoUs;
	SysTick->RELOAD=ticks-1;
	SysTick->CURR=0;
	SysTick->CTRL=7; //Ta feo per d asi
}


void SysTick_Handler(){//El nombre sedefine tocando una tabla en el header
	static uint32_t contadorTicks=0;

	contadorTicks++;

	if(contadorTicks>=500){
		contadorTicks=0;
		sysTickInterrupt=true;
	}
	callbackFunc();
}


void installSysTickCallback(void (*myCallback)()){
	callbackFunc=(volatile void (*)()) myCallback;

}
