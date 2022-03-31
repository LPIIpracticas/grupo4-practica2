#pragma once
#include <string>

using namespace std;

class Persona
{
private:
    int dni;
    string nombre;
    int edad;
public:
    void ingresar();
    void imprimir();
    // getters
    int getDni();
    string getNombre();
    int getEdad();
    // setters
    void setDni(int);
    void setNombre(string);
    void setEdad(int);
};