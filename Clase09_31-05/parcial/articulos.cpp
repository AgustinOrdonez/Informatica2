#include "articulos.h"

using namespace std;

int articulos::sCodigoArticulo = 0;

void articulos::Set_Descripcion(char *descripcion) {
    this->mDescripcion = descripcion;
}

void articulos::Set_Stock(float stock) {
    this->mStock = stock;
}

char *articulos::Get_Descripcion() {
    return this->mDescripcion;
}

float articulos::Get_Stock() {
    return this->mStock;
}

articulos::articulos(const char *descripcion, float stock) : mStock(stock) {
    try {
        this->mDescripcion = new char[strlen(descripcion)];
        strcpy(this->mDescripcion, descripcion);
        this->mID = ++articulos::sCodigoArticulo;
    } catch (bad_alloc &e) {
        cout << "Error en la asignacion de memoria: " << e.what() << endl;
        exit(EXIT_FAILURE);
    }

}

articulos::~articulos() {
    delete[] this->mDescripcion;

}
