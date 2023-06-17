//
// Created by Usuario on 26/05/2023.
//

#include "Avion.h"

Avion::Avion(const String &matricula, const String &cia) : matricula(matricula), cia(cia) {

}

Avion::Avion(const Avion &avionOG) {

    this->matricula = avionOG.matricula;
    this->cia = avionOG.cia;

}
