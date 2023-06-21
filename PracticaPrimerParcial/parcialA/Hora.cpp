//
// Created by Usuario on 26/05/2023.
//

#include "Hora.h"

//Pre (Primero suma después devuelve)
Hora Hora::operator++() {
    if (this->min < 59) {
        this->min++;
    }
    else {
        if (this->hora == 23) {
            this->hora = 0;
        }
        else {
            this->hora += 1;
        }
        this->min = 0;
    }

    return *this;

}

//Post
Hora Hora::operator--(int) {
    Hora temp(*this);

    if (this->min > 0) {
        this->min--;
    }
    else {
        if (this->hora == 0) {
            this->hora = 23;
        }
        else {
            this->hora--;
        }
        this->min = 59;
    }

    return temp;
}

bool Hora::operator==(const Hora &rhs) const {
    return hora == rhs.hora &&
           min == rhs.min;
}

bool Hora::operator!=(const Hora &rhs) const {
    return !(rhs == *this);
}

bool Hora::operator<(const Hora &rhs) const {
    if (hora < rhs.hora)
        return true;
    if (rhs.hora < hora)
        return false;
    return min < rhs.min;
}

bool Hora::operator>(const Hora &rhs) const {
    return rhs < *this;
}

bool Hora::operator<=(const Hora &rhs) const {
    return !(rhs < *this);
}

bool Hora::operator>=(const Hora &rhs) const {
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const Hora &hora) {
    os << "hora: " << hora.hora << " min: " << hora.min;
    return os;
}
