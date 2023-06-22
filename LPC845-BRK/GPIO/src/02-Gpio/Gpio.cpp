#include "Gpio.h"

Gpio::Gpio(port_t port, uint8_t bit, uint8_t mode, direction_t direction, activity_t activity):
	port{port}, bit{bit}, mode{mode}, direction{direction}, activity{activity} {
	this->m_error=Gpio::ok;
	if((port != Gpio::port0)&& (port != Gpio::port1)) {
		this->m_error=Gpio::error;
	}
	else if((port == Gpio::port0 )&& (bit >= Gpio::bPort0)){
		this->m_error=Gpio::error;
	}
	else if((port == Gpio::port1 )&& (bit >= Gpio::bPort1)){
		this->m_error=Gpio::error;
	}
	if(direction==Gpio::input){
		this->setDirInputs();
	}else if(direction==Gpio::output){
		this->setDirOutputs();
	}
}

uint8_t Gpio::setDirInputs(){
	if(this->m_error==ok){
		GPIO->DIRCLR[this->port] |= 1 << this->bit;
	}
	return this->error;
}


uint8_t Gpio::setDirOutputs(){
	if(this->m_error==ok){
			GPIO->DIRSET[this->port] |= 1 << this->bit;
	}
	return this->error;
}


uint8_t Gpio::getPin(){
	uint8_t valor=Gpio::error;

	if(this->m_error==ok){
		if(this->activity==Gpio::high){
			valor=(GPIO->PIN[this->port] >> this->bit) & 1;
		}
		else{
			valor=!((GPIO->PIN[this->port] >> this->bit) & 1);
		}
	}

	return valor;


}
uint8_t Gpio::setPinMode(){
	//Todo implement
}

uint8_t Gpio::setPinResistor(){
	//Todo implement
}

uint8_t Gpio::clrPin(){
	if(this->m_error==ok){
		if(this->activity == Gpio::high){
			GPIO->CLR[this->port] |= 1<<this->bit;
		}
		else{
			GPIO->SET[this->port] |= 1<<this->bit;
		}
	}
	return this->error;
}

uint8_t Gpio:: setPin(){
	if(this->m_error==ok){
		if(this->activity == Gpio::high){
			GPIO->SET[this->port] |= 1<<this->bit;
		}
		else{
			GPIO->CLR[this->port] |= 1<<this->bit;
		}
	}
	return this->error;
}

uint8_t Gpio::setTogglePin(){
	if(this->m_error==ok){
		GPIO->NOT[this->port]|= 1 << this->bit ;

	}
}

Gpio::~Gpio(){

}
