#include <string>
#include <iostream>

using namespace std;

#include "fecha.h"
void fecha::ingresar()
{
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Año: ";
    cin >> year;
}
void fecha::imprimir()
{
    cout << dia << "/" << mes << "/" << year << endl;
}
int fecha::cantidadTiempo(fecha n)
{
    if (this->year > n.year)
        return (this->year - n.year);
    else
        return (n.year - this->year);
}