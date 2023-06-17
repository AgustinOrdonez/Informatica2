#include <iostream>
#include "Envio.h"

int main(){

    Cliente cliente;
    std::cout<<"Mem "<<&cliente<<std::endl;
    Envio envio(cliente,2,1,1);
}