/*
 * Output.h
 *
 *  Created on: Jun 14, 2023
 *      Author: dioswilson1
 */

#ifndef OUTPUT_H_
#define OUTPUT_H_

#include "types.h"

class Output {
    public:
        virtual uint8_t setPin() = 0;

        virtual uint8_t clrPin() = 0;

        virtual uint8_t setTogglePin() = 0;

        virtual uint8_t setDirOutputs() = 0;

        virtual uint8_t setPinResistor() = 0;
};

#endif /* OUTPUT_H_ */
