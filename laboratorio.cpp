#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarPersonaje(const Computadora &p)
{
    if (cont < 5){
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout<<"Arrelgo lleno"<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout<<"Sistema Operativo: "<<p.getSo()<<endl;
        cout<<"Nombre de Usuario: "<<p.getNomuser()<<endl;
        cout<<"Almacenamiento: "<<p.getAlmacenamiento()<<endl;
        cout<<"RAM: "<<p.getRam()<<endl;
        cout<<endl;
    }
    
}