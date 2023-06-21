//
// Created by Usuario on 27/05/2023.
//

#include "Envio.h"

Envio::Envio(Cliente cliente, int cantDc, int cantSc, int cantP) :
        c{cliente}, cant_dc{cantDc}, cant_sc{cantSc}, cant_p{cantP}, estado{false}, recaudacion{0}, cantEnvios{0} {

}

std::ostream &operator<<(std::ostream &o, Envio envio) {
    return o << "Datos del evnio: ....";
}

void Envio::Entregado() {
    this->cantEnvios++;

    this->total = cant_p * this->getP() + cant_sc * this->getSc() + cant_dc * this->getDc();

    this->recaudacion += this->total;
    this->estado = true;

}
