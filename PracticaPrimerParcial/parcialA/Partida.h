#ifndef INFORMATICA2_PARTIDA_H
#define INFORMATICA2_PARTIDA_H


#include "Avion.h"
#include "Hora.h"
#include <iostream>

class Partida : public Avion {
    private:
        String destino;
        int puerta;
        Hora hora;
    public:
        Partida();

        Partida(const String &matricula, const String &cia, const String &destino, int puerta, const Hora &hora);

        Partida(const Partida &);

        Partida(int puerta);

        void setDestino(String destino);

        friend std::ostream &operator<<(std::ostream &o,Partida partida);
};


#endif //INFORMATICA2_PARTIDA_H
