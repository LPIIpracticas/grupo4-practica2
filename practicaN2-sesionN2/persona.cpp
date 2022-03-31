#include "persona.h"
#include <iostream>

using namespace std;

void Persona::ingresar()
{
    cout << "INGRESAR DATOS DE PERSONA: " << endl;
    cout << "dni: ";
    cin >> dni;
    cin.ignore();
    cout << "nombre: ";
    getline(cin, nombre);
    cout << "edad: ";
    cin >> edad;
}
void Persona::imprimir()
{
    cout << "DATOS DE PERSONA: " << endl;
    cout << "dni: " << dni << endl;
    cout << "nombre: " << nombre << endl;
    cout << "edad: " << edad << endl;
}
// getters
int Persona::getDni()
{
    return dni;
}
string Persona::getNombre()
{
    return nombre;
}
int Persona::getEdad()
{
    return edad;
}
// setters
void Persona::setDni(int d)
{
    dni = d;
}
void Persona::setNombre(string n)
{
    nombre = n;
}
void Persona::setEdad(int e)
{
    edad = e;
}