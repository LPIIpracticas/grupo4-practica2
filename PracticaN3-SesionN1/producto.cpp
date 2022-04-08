#pragma once

#include <iostream>
#include "producto.h"

using namespace std;

void Producto::ingresar()
{
    cout << "INGRESAR DATOS DE PRODUCTO:" << endl;
    cout << "--------------------------" << endl;

    cout << "idProducto: ";
    cin >> idProducto;
    cout << "cantidad: ";
    cin >> cantidad;
    cout << "precio: ";
    cin >> precio;
}
void Producto::imprimir()
{
    cout << "DATOS DE PRODUCTO:" << endl;
    cout << "-----------------" << endl;
    cout << "idProducto: " << idProducto << endl;
    cout << "cantidad: " << cantidad << endl;
    cout << "precio: " << precio << endl;
}
void Producto::aumentar(int cantidad)
{
    this->cantidad += cantidad;
}
void Producto::disminuir(int cantidad)
{
    this->cantidad -= cantidad;
}
float Producto::getPrecio()
{
    return precio;
}
int Producto::getCantidad()
{
    return cantidad;
}