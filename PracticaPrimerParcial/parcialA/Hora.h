#ifndef INFORMATICA2_HORA_H
#define INFORMATICA2_HORA_H


#include <ostream>

class Hora {



    int hora ;
    int min;

public:
    Hora(); //inicializa en 0,0
    Hora(const Hora &);

        friend std::ostream &operator<<(std::ostream &os, const Hora &hora);

        bool operator<(const Hora &rhs) const;

        bool operator>(const Hora &rhs) const;

        bool operator<=(const Hora &rhs) const;

        bool operator>=(const Hora &rhs) const;

        bool operator==(const Hora &rhs) const;

        bool operator!=(const Hora &rhs) const;

        //pre incremento
    Hora operator++();

    // pos decremento
    Hora operator--(int);
};


#endif //INFORMATICA2_HORA_H
