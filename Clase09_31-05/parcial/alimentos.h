#ifndef ALIMENTOS_H
#define ALIMENTOS_H

#include "articulos.h"

using namespace std;


class alimentos : public articulos {

    private:

        const float IMPUESTO_ALIMENTOS = 1.1;

        int mValorCalorico;
        float mPrecioUnitario;

    public:

        alimentos(const char *descripcion, float stock,
                  int calorias, float precio);

        float Calcular_Precio(float);

        bool operator<(alimentos &);

        friend ostream &operator<<(ostream &o, const alimentos &a);
};

#endif // ALIMENTOS_H
