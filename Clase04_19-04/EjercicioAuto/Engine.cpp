#include "Engine.h"

using std::endl;

Engine::Engine() {
    this->cilindrada = 0;
    this->fuelType = 0;
}

Engine::Engine(std::string brand, unsigned int cilindrada, unsigned char fuelType) :
        brand{brand}, cilindrada{cilindrada}, fuelType{fuelType} {

}

void Engine::printValues() {
    std::cout << "Datos del motor: " << endl <<
              "Marca: " << this->brand << endl <<
              "Cilindrada" << this->cilindrada << endl <<
              "Combustible: " << this->fuelType << endl; // change to enum class
}

std::ostream &operator<<(std::ostream &o, const Engine &engine) {
    return o << "Motor: " << engine.brand << engine.cilindrada << engine.fuelType << endl;
}
