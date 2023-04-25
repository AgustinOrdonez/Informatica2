#include "Car.h"

Car::Car() : year{2} {

}

Car::Car(unsigned int year, std::string brandAndModel, const Engine &engine, Chasis &chasis, unsigned int km,
         unsigned int tiresAmount) :
        year{year}, brandAndModel{brandAndModel}, engine{engine}, chasis{chasis}, km{km} {
    this->tires = new Tire[tiresAmount];
}

std::ostream &operator<<(std::ostream &o, const Car &car);

unsigned int Car::getYear() {
    return this->year;
}
