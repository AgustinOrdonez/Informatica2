#ifndef FERRETERIA_H
#define FERRETERIA_H

#include "articulos.h"

using namespace std;

class ferreteria : public articulos {

    private:

        const float IMPUESTO_FERRETERIA = 1.2;
        float mPrecioUnitario;
        char *mOrigen;

    public:

        ferreteria(const char *descripcion, float stock, float precio, char *origen);

        float Calcular_Precio(float);

        friend ostream &operator<<(ostream &o, const ferreteria &f);

        ~ferreteria();
};

#endif // FERRETERIA_H
