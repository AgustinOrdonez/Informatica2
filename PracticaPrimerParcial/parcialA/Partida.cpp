//
// Created by Usuario on 26/05/2023.
//

#include "Partida.h"

//Idk si quieren que los instancie a mano
Partida::Partida(const String &matricula, const String &cia, const String &destino, int puerta, const Hora &hora)
        : Avion(matricula, cia), destino(destino), puerta(puerta), hora(hora) {}

Partida::Partida(const Partida &partida) :
        destino{partida.destino}, hora{partida.hora}, puerta{partida.puerta}, Avion{partida.matricula, partida.cia} {

}

Partida::Partida(int puerta) : puerta{puerta} {
/*Considero como correcto los valores al azar, ya que depende de la implemtación de la clase,
 * no creo que como diseñador de la clase tenga que imponerle al usuario los valores de inicio
 * de los miembros en 0 o en cualquier otro valor porque sería altamente arbitario, además de gastar
 * recursos en eso cuando no es necesario
*/
}

void Partida::setDestino(String destino) {
    this->destino = destino;
}

std::ostream &operator<<(std::ostream &o, Partida partida) {
    return o << "Hora (Sobrecargar hora, aburrido), etc, etc";
}
