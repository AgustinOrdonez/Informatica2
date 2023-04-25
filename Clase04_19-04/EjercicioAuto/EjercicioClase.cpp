#include <iostream>
#include "Car.h"

int main() {
    Car thing;
    unsigned int year = thing.getYear();

    std::cout << year << std::endl;
    return 0;

}
