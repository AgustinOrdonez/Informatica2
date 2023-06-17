#include <iostream>
#include "alimentos.h"
#include "articulos.h"
#include "ferreteria.h"

using namespace std;

int main() {

    alimentos a1("Muzzarela", 1000, 290, 2700);
    alimentos a2("Por Salut", 800, 295, 3200);

    ferreteria f1("Martillo", 100, 270.50, "China");
    ferreteria f2("Pala", 100, 270.50, "Peru");

    cout << a1 << endl;
    cout << a2 << endl;
    cout << f1 << endl;
    cout << f2 << endl;

    cout << "Precio de 5 unidades de a1: $" << a1.Calcular_Precio(5) << endl;
    cout << "Precio de 3 unidades de f2: $" << f2.Calcular_Precio(3) << endl;

    if (a1 < a2) {
        cout << "El id de a1 es menor que el de a2" << endl;
    }
    else {
        cout << "El id de a1 es mayor que el de a2" << endl;
    }
}

