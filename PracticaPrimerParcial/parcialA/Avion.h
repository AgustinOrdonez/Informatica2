#ifndef INFORMATICA2_AVION_H
#define INFORMATICA2_AVION_H


#include "String.h"

class Avion {
    protected:
        String matricula; //XB218 por ejemplo
        String cia; //compañía aérea: Austral, LATAM,
    public:
//constructor parametrizado con valores iniciales triviales a su elección
        Avion();

        Avion(const String &matricula, const String &cia);

        Avion(const Avion &avionOG);

//constructor de copia
        ~Avion();
// agregar mas métodos si considera que faltan
};


#endif //INFORMATICA2_AVION_H
