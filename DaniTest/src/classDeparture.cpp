#include "classDeparture.hpp"

Departure::Departure() {
    this->m_destiny = "New York";
    this->m_boardingGate = 1;
    cout << "--- Flight time to New York ---" << endl;
    this->m_time.setTime();
}

Departure::Departure(const String destiny, const uint16_t boardingGate, const Hour time) :
    m_destiny{destiny},
    m_boardingGate{boardingGate},
    m_time{time} { }

Departure::Departure(const String destiny, const Hour time) :
    m_destiny{destiny},
    m_time{time} {
        this->m_boardingGate = 9;
}

Departure::~Departure() { }

void Departure::setDestiny(const String destiny) {
    this->m_destiny = destiny;
}

ostream& operator<<(ostream& output, Departure& departure) {
    output << static_cast<Plane&>(departure) << endl
           << "Destiny: " << departure.m_destiny << endl
           << "Boarding Gate: " << departure.m_boardingGate << endl
           << departure.m_time << endl << endl;
    return output;
}

