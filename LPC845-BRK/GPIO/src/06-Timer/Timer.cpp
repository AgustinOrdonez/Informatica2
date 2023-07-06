/*
 * Timer.cpp
 *
 *  Created on: Jul 5, 2023
 *      Author: dioswilson1
 */

#include <Timer.h>

extern std::list<Callback*> callbackList;

Timer::Timer() : Callback() {
	this->tmrRun=0;
	this->tmrEventFlag=0;
	this->tmrStandby=RUN;
	this->tmrBase=DEC;
	this->tmrHandler=nullptr;


	callbackList.push_back(this);
}

Timer::Timer(const TimerHandler handler, const bases_t base): tmrHander{handler}, tmrBase{base}{
	this->tmrRun=0;
	this->tmrEventFlag=0;
	this->tmrStandby=RUN;
}

void Timer::timerStart(uint32_t time, const TimerHandler handler, const bases_t base){

	switch(base){
		MIN:
			time*=MINUTOS;
		SEG:
			time*=SEGUNDOS;
		DEC:
			time*=DECIMAS;
			break;
		default:
			//ERROR, mal ahí por no usar clases enumeradas
			break;
	}

	if(time){
		this->tmrRun=time;
		this->tmrEvent=false;
	}
	else{
		this->tmrRun=0;
		this->tmtEvent=true;
	}

	this->tmrHandler=handler;
	this->tmrBase=base;
}

void Timer::timerStart(uint32_t time){

	switch(this->tmrBase){
		MIN:
			time*=MINUTOS;
		SEG:
			time*=SEGUNDOS;
		DEC:
			time*=DECIMAS;
			break;
		default:
			//ERROR, mal ahí por no usar clases enumeradas
			break;
	}

	if(time){
		this->tmrRun=time;
		this->tmrEvent=false;
	}
	else{
		this->tmrRun=0;
		this->tmtEvent=true;//Considero que vamos para adelante
	}

}

void Timer::setTimer(uint32_t time){
	switch(this->tmrBase){
		MIN:
			time*=MINUTOS;
		SEG:
			time*=SEGUNDOS;
		DEC:
			time*=DECIMAS;
			break;
		default:
			//ERROR, mal ahí por no usar clases enumeradas
			break;
	}

	if(time){
		this->tmrRun=time;
		this->tmrEvent=false;
	}
	else{
		this->tmrRun=0;
		this->tmtEvent=true;//Considero que vamos para adelante
	}
}

uint32_t getTimer() const{
	uint32_t time=this->tmrRun;

	switch(this->tmrBase){
		MIN:
			time/=MINUTOS;
		SEG:
			time/=SEGUNDOS;
		DEC:
			time/=DECIMAS;
			break;
		default:
			//ERROR, mal ahí por no usar clases enumeradas
			break;
	}

}
