#include "Chasis.h"

Chasis::Chasis() {

}

Chasis::Chasis(std::string chasisCode, unsigned int weight, unsigned int length, unsigned int width) :
        chasisCode{chasisCode}, weight{weight}, length{length}, width{width} {
}

std::ostream &operator<<(std::ostream &o, const Chasis &chasis) {}
