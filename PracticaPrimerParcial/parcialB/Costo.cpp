//
// Created by Usuario on 27/05/2023.
//

#include "Costo.h"

Costo::Costo(float dc, float sc, float p) : dc(dc), sc(sc), p(p) {
    //Nada más, costos negativos, idc
}

std::ostream &operator<<(std::ostream &o, Costo costo) {
    return o << "Costo DC: " << costo.dc << std::endl
             << "Costo SC: " << costo.sc << std::endl
             << "Costo P:  " << costo.p;
}

Costo::Costo() {

}

void Costo::set_costo(float dc, float sc, float p) {
    this->dc = dc;
    this->sc = sc;
    this->p = p;
}

float Costo::getDc() const {
    return dc;
}

void Costo::setDc(float dc) {
    Costo::dc = dc;
}

float Costo::getSc() const {
    return sc;
}

void Costo::setSc(float sc) {
    Costo::sc = sc;
}

float Costo::getP() const {
    return p;
}

void Costo::setP(float p) {
    Costo::p = p;
}
