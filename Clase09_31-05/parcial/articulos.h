#ifndef ARTICULOS_H
#define ARTICULOS_H

#include <iostream>
#include <string.h>

class articulos
{
    protected:

        static int  sCodigoArticulo;

        int     mID;
        char*   mDescripcion;
        float   mStock;

    public:

        articulos(const char *descripcion, float stock);

        virtual float Calcular_Precio (float) = 0;

        char* Get_Descripcion();
        float Get_Stock();

        void Set_Descripcion(char *newDescripcion);
        void Set_Stock(float newStock);

        ~articulos();
};

#endif // ARTICULOS_H
