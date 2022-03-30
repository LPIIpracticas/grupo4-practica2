#pragma once

#include <string>
#include <iostream>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int year;
    void ingresar();
    void imprimir();
    int cantidadTiempo(fecha dos);
};