#ifndef INFORMATICA2_ENVIO_H
#define INFORMATICA2_ENVIO_H


#include "Cliente.h"
#include "Costo.h"

class Envio :public Costo{
    private:
        Cliente c;
        bool estado; //inicialmente en false = No entregado
        int cant_dc;
        int cant_sc;
        int cant_p;
        float total;
        //Agregar estas variables “Recaudacion” y “cant_envio” con sus tipos modificadores que correspondan
        double recaudacion;
        unsigned int cantEnvios;
    public:
        Envio();

        Envio(Cliente);

        Envio(Cliente cliente, int cantDc, int cantSc, int cantP);

        void set_estado(bool);

        void get_cuenta(); //obtiene la cuenta del pedido y almacena el
//Total
//implementar una función que permita imprimir los datos del envío a
//saber: N° del pedido, nombre del Cliente y dirección, TOTAL y el estado
//Entregado o a Entregar
        float get_Recaudacion();

        void Entregado(); //cambia el estado a true= Entregado
//Implementar una función “Recaudado()” de forma que al llamarla sin la
//necesidad de acceder a ella através de un objeto de la clase permita
// saber la recaudación del día
        friend std::ostream &operator<<(std::ostream &o, Envio envio);

};


#endif //INFORMATICA2_ENVIO_H
