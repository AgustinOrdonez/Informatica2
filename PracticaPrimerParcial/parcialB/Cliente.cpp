//
// Created by Usuario on 27/05/2023.
//

#include <cstring>
#include "Cliente.h"
#include <iostream>

Cliente::Cliente() {
    //No hago nada, no me gusta malgastar recursos en cosas innecesarias
}

Cliente::Cliente(char *nombre) {

    strcpy(this->nombre, nombre);

}

Cliente::Cliente(char *nombre, char *direccion) {
    strcpy(this->nombre, nombre);
    strcpy(this->direccion, direccion);

}

Cliente::Cliente(const Cliente &cliente) {
    std::cout << "MEMORIA: " << &(this->nombre) << std::endl
              << "Memoria cliente: " << &(cliente.nombre)<< std::endl;
}
