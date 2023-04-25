#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Engine.h"
#include "Chasis.h"
#include "Tire.h"

class Car {
    private:
        unsigned int year;
        std::string brandAndModel;
        Engine engine;
        Chasis chasis;
        unsigned int km;
        unsigned int tiresAmount;
        Tire *tires;

    public:
        Car();

        Car(unsigned int year, std::string brandAndModel, const Engine &engine, Chasis &chasis, unsigned int km,
            unsigned int tiresAmount);

        friend std::ostream &operator<<(std::ostream &o, const Car &car);

        unsigned int getYear();
};


#endif // CAR_H
