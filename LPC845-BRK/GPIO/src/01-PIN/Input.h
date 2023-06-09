/*
 * Input.h
 *
 *  Created on: Jun 14, 2023
 *      Author: dioswilson1
 */

#ifndef INPUT_H_
#define INPUT_H_

#include "types.h"


class Input {
    public:
        virtual uint8_t setDirInputs() = 0;

        virtual uint8_t getPin() = 0;

        virtual uint8_t setPinMode() = 0;
};

#endif /* INPUT_H_ */
