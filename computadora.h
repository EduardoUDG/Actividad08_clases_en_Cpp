#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Computadora{
private:
    string so;
    string nomuser;
    string almacenamiento;
    int ram;
public:
    Computadora();
    Computadora(const string &so, 
              const string &nomuser,
              const string &almacenamiento,
              int ram);
    void setSo(const string &v);
    string getSo();
    void setNomuser(const string &v);
    string getNomuser();
    void setAlmacenamiento(const string &fuerza);
    string getAlmacenamiento();
    void setRam(int v);
    int getRam();

};

#endif