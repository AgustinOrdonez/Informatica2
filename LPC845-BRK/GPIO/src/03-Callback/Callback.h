#ifndef CALLBACK_H_
#define CALLBACK_H_

#include "infotronicInit.h"
#include "sysTick.h"

class Callback {

private:
	void (*callback)(void);

public:
	Callback(void (*callback)(void)=nullptr);
	virtual void myCallback();
	~Callback();
};


#endif /* 03_CALLBACK_CALLBACK_H_ */
