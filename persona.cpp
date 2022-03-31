#include "persona.h"



    void Persona::ingresar(){}
    void Persona::imprimir(){}
    // getters
    int Persona::getDni(){
        return dni;
    }
    string Persona::getNombre(){
        return nombre;
    }
    int Persona::getEdad(){
        return edad;
    }
    // setters
    void Persona::setDni(int d);
    {
        dni=d;
    }
    void Persona::setNombre(string n){
        nombre=n;
    }
    void Persona::setEdad(int e){
       edad =e;
    }