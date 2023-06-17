#include "alimentos.h"

using namespace std;

alimentos::alimentos(const char *descripcion, float stock, int calorias, float precio) :
        articulos(descripcion, stock),
        mValorCalorico{calorias},
        mPrecioUnitario{precio} {

}

float alimentos::Calcular_Precio(float cantidad) {
    return cantidad * mPrecioUnitario * this->IMPUESTO_ALIMENTOS;
}

bool alimentos::operator<(alimentos &alimento) {
    return this->mID < alimento.mID;
}

ostream &operator<<(ostream &o, const alimentos &a) {
    return o << "ID: " << a.mID << endl
             << "Descripcion: " << a.mDescripcion << endl
             << "Stock: " << a.mStock << endl
             << "Calorías cada 100 gramos : " << a.mValorCalorico << endl
             << "Precio unitario: $" << a.mPrecioUnitario << endl;
}

