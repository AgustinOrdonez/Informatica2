#ifndef INFORMATICA2_PUNTO2D_H
#define INFORMATICA2_PUNTO2D_H

class Punto2D {
    private:
        float x;
        float y;
    public:
        Punto2D();

        Punto2D(float x, float y);

        float getX() const;

        void setX(float x);

        float getY() const;

        void setY(float y);

        Punto2D getPunto();

        void setPunto(float x, float y);

        void setPunto(const Punto2D &punto2D);

        Punto2D operator-() const;

};


#endif //INFORMATICA2_PUNTO2D_H
