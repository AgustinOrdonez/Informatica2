/*
 * Callback.cpp
 *
 *  Created on: Jul 5, 2023
 *      Author: dioswilson1
 */

#include <Callback.h>

extern std::list< Callback * > callbackList;

Callback::Callback(void (*callback)(void)): callback{callback} {
	if(callback!=nullptr){
		callbackList.push_back(this);
	}

}

void Callback::myCallback(){
	if(this->callback){
		this->callback();
	}

}
