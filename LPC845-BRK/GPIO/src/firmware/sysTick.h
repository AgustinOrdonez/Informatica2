#ifndef FIRMWARE_SYSTICK_H_
#define FIRMWARE_SYSTICK_H_

#include <list>
#include "types.h"
#include "LPC845.h"

#if defined (__cplusplus)
extern "C"{
	void SysTick_Handler();
}
#endif


#define FREQ_MCU_CLOCK 12000000

extern bool sysTickInterrupt;


void sysTickInit(uint32_t periodoMs);
void SysTick_Handler();
void installSysTickCallback(void (*myCallback)());


#endif /* FIRMWARE_SYSTICK_H_ */
