#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarPersonaje(const Computadora &p);
    void mostrar();
};


#endif