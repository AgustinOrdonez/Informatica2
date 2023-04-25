#ifndef CHASIS_H
#define CHASIS_H
#include <iostream>

class Chasis{
    private:
        std::string chasisCode;
        unsigned int weight;
        unsigned int length;
        unsigned int width;

    public:
        Chasis();
        Chasis(std::string chasisCode,unsigned int weight, unsigned int length, unsigned int width);
        friend std::ostream& operator<<( std::ostream& o,const Chasis &chasis);
};

#endif // CHASIS_H
