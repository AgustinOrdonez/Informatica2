#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

class Engine{
    private:
        std::string brand;
        unsigned int cilindrada; //EW
        unsigned char fuelType;

    public:
        Engine();
        Engine(std::string brand, unsigned int cilindrada, unsigned char fuelType);
        void printValues();
        friend std::ostream& operator<<( std::ostream& o,const Engine &engine);
};

#endif // ENGINE_H
