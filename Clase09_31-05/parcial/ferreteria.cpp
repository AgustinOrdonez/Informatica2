#include "ferreteria.h"

using namespace std;


ferreteria::ferreteria(const char *descripcion, float stock, float precio, char *origen) :
        articulos(descripcion, stock),
        mPrecioUnitario{precio} {
    try {
        this->mOrigen = new char[strlen(origen)];
        strcpy(this->mOrigen, origen);
    } catch (bad_alloc &e) {
        cout << "Error en la asignacion de memoria: " << e.what() << endl;
        exit(EXIT_FAILURE);
    }
}

float ferreteria::Calcular_Precio(float cantidad) {
    return mPrecioUnitario * cantidad * this->IMPUESTO_FERRETERIA;
}

ostream &operator<<(ostream &o, const ferreteria &f) {
    return o << "ID: " << f.mID << endl
             << "Descripcion: " << f.mDescripcion << endl
             << "Stock: " << f.mStock << endl
             << "Precio unitario: $" << f.mPrecioUnitario << endl
             << "Origen: " << f.mOrigen << endl;
}

ferreteria::~ferreteria() {
    delete[] this->mOrigen;
}
