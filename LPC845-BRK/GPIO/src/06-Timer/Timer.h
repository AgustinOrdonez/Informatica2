/*
 * Timer.h
 *
 *  Created on: Jul 5, 2023
 *      Author: dioswilson1
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "Callback.h"

typedef void (*TimerHandler)();


class Timer : public Callback{
protected:
	volatile uint32_t tmrRun; //Cantidad de ticks
	volatile bool tmrEventFlag;
	void (*tmrHandler)();
	volatile bool tmrStandby; //Bool para pausar
	volatile uint8_t tmrBase;

public:
	enum bases_t{DEC, SEG , MIN};
	enum ticks_t{DECIMAS =100, SEGUNDOS=10, MINUTOS=60};
	enum standby_t {RUN,PAUSE};

	Timer();
	Timer(const TimerHandler handler, const bases_t base);
	void timerStart(uint32_t time, const TimerHandler handler, const bases_t base);
	void timerStart(uint32_t time);
	void setTimer(uint32_t time);
	uint32_t getTimer() const;
	void timerStop();
	void setTimerStandby(const standby_t accion);
	void timerEvent();
	void myCallback();

	~Timer();
};


#endif /* 06_TIMER_TIMER_H_ */
