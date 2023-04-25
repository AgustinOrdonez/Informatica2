#include "Tire.h"

Tire::Tire() : pressure{17}, diameter{27}, width{7} {

}

Tire::Tire(unsigned int pressure, unsigned int diameter, unsigned int width) :
        pressure{pressure}, diameter{diameter}, width{width} {

}

unsigned int Tire::getPressure() const {
    return pressure;
}

void Tire::setPressure(unsigned int value) {
    pressure = value;
}

unsigned int Tire::getDiameter() const {
    return diameter;
}

void Tire::setDiameter(unsigned int value) {
    diameter = value;
}

unsigned int Tire::getWidth() const {
    return width;
}

void Tire::setWidth(unsigned int value) {
    width = value;
}
