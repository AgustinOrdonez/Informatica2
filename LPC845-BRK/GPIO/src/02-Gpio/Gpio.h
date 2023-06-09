
#ifndef GPIO_H_
#define GPIO_H_

#include "Input.h"
#include "Output.h"
#include "LPC845.h"



#define CLK_GPIO0 6
#define CLK_GPIO1 18
#define CLK_ICON 20



class Gpio : public Input, public Output {
    protected:
        const uint8_t port;
        const uint8_t bit;
        const uint8_t mode;
        uint8_t direction;
        const uint8_t activity;
        uint8_t m_error;

    public:

        enum port_t {
                port0, port1
        };
        enum max_bits_port_t {
                bPort0 = 31, bPort1 = 9
        };
        enum direction_t {
                input, output
        };
        enum power_t {
                off, on
        };
        enum mode_output_t {
                pushpull, opencollector
        };
        enum mode_input_t {
                inactive, pulldown, pullup, repeater
        };
        enum activity_t {
                low, high
        };
        enum error_t {
                error = 2, ok
        };


        Gpio(port_t port, uint8_t bit, uint8_t mode, direction_t direction, activity_t activity);

        virtual ~Gpio();

        uint8_t setDirInputs();

        uint8_t getPin();

        uint8_t setPinMode();

        uint8_t setPin();

        uint8_t clrPin();

        uint8_t setTogglePin();

        uint8_t setDirOutputs();

        uint8_t setPinResistor();

};

#endif /* GPIO_H_ */
