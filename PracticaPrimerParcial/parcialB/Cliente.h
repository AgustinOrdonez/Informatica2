//
// Created by Usuario on 27/05/2023.
//

#ifndef INFORMATICA2_CLIENTE_H
#define INFORMATICA2_CLIENTE_H


class Cliente {
        char nombre[20]; //0 ended String
//        char *nombre; //0 ended String
        char direccion[20];
    public:
        Cliente();

        Cliente(const Cliente &cliente);

        //nombre
        Cliente(char *nombre);

        //nombre,direccion
        Cliente(char *nombre, char *direccion);

        char *getCliente();

        char *getDireccion();

        void set_direccion(char *);
};


#endif //INFORMATICA2_CLIENTE_H
