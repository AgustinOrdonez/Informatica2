#include "Punto2D.h"

Punto2D::Punto2D() {
    this->x = 0;
    this->y = 0;
}

Punto2D::Punto2D(float x, float y) {
    this->x = x;
    this->y = y;
}

float Punto2D::getX() const {
    return this->x;
}

void Punto2D::setX(float x) {
    this->x = x;
}

float Punto2D::getY() const {
    return this->y;
}

void Punto2D::setY(float y) {
    this->y = y;
}

Punto2D Punto2D::getPunto() {
//    return Punto2D();
}

void Punto2D::setPunto(float x, float y) {
    this->x = x;
    this->y = y;

}

void Punto2D::setPunto(const Punto2D &punto2D) {
    this->x = punto2D.getX();
    this->y = punto2D.getY();
}

Punto2D Punto2D::operator-() const {
    Punto2D result;
    result.x = -this->x;
    result.y = -this->y;
    return result;
}
