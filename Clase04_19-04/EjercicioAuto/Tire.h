#ifndef TIRE_H
#define TIRE_H
#include <iostream>

class Tire{
    private:
        unsigned int pressure;
        unsigned int diameter;
        unsigned int width;
    public:
        Tire();
        Tire(unsigned int pressure, unsigned int diameter, unsigned int width);
        friend std::ostream& operator<<( std::ostream& o,const Tire &car);
        unsigned int getPressure() const;
        void setPressure(unsigned int value);

        unsigned int getDiameter() const;
        void setDiameter(unsigned int value);
        unsigned int getWidth() const;
        void setWidth(unsigned int value);
};



#endif // TIRE_H
