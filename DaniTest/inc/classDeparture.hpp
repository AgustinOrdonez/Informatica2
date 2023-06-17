#ifndef _CLASS_DEPARTURE_HPP_
#define _CLASS_DEPARTURE_HPP_

#include "classPlane.hpp"
#include "classHour.hpp"

class Departure : public Plane {
    private:
        String m_destiny;
        uint16_t m_boardingGate;
        Hour m_time;
    public:
        Departure();
        Departure(const String destiny, const uint16_t boardingGate, const Hour time);
        Departure(const String destiny, const Hour time);
        ~Departure();

        void setDestiny(const String destiny);
        
        // IMPORTANT: In a function with constant parameters, 
        // the static_cast operator cannot perform certain conversions that could modify the value of the constant parameter.
        friend ostream& operator<<(ostream& output, Departure& departure); 
};

#endif // _CLASS_DEPARTURE_HPP_