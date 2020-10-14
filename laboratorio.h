#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarPersonaje(const Computadora &p);
    void mostrar();

    friend Laboratorio& operator<<(Laboratorio &v, const Computadora &p)
    {
        v.agregarPersonaje(p);

        return v;
    }
};


#endif