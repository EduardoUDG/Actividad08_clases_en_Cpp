#include<iostream>
#include<conio.h>
#include<string>

#include "laboratorio.h"

using namespace std;

int main(){
    Computadora comp01;
    comp01.setSo("Windows");
    comp01.setNomuser("Eduardo");
    comp01.setAlmacenamiento("500GB");
    comp01.setRam(8);

    Computadora comp02;
    comp02.setSo("MacOS");
    comp02.setNomuser("Luis");
    comp02.setAlmacenamiento("1TB");
    comp02.setRam(16);


    Laboratorio vj;
    vj.agregarPersonaje(comp01);
    vj.agregarPersonaje(comp02);

    vj.mostrar();
    return 0;
} 