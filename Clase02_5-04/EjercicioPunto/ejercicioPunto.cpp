#include <iostream>
#include "Punto2D.h"

int main(){
    Punto2D punto2D(3, 4);
    Punto2D punto2D1 = -punto2D;
    std::cout << "X: " << punto2D1.getX() << " Y: " << punto2D1.getY();
    return 0;
}