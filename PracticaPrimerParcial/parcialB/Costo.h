//
// Created by Usuario on 27/05/2023.
//

#ifndef INFORMATICA2_COSTO_H
#define INFORMATICA2_COSTO_H


#include <iostream>

class Costo {
        float dc; //inicialmente valor 100
        float sc; //inicialmente valor 100
        float p; //inicialmente valor 100
    public:
        Costo();

        Costo(float dc, float sc, float p);

        void set_costo(float dc, float sc, float p);

        float getDc() const;

        void setDc(float dc);

        float getSc() const;

        void setSc(float sc);

        float getP() const;

        void setP(float p);

        friend std::ostream &operator<<(std::ostream &o, Costo costo);

};

#endif //INFORMATICA2_COSTO_H
