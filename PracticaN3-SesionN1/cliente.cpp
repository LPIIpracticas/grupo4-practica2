#include "producto.h"
#include "producto.cpp"

#include "cliente.h"

#include <iostream>

using namespace std;

void Cliente::ingresar()
{
    cout << "INGRESAR DATOS DE CLIENTE:" << endl;
    cout << "--------------------------" << endl;

    cout << "DNI: ";
    cin >> DNI;
    cout << "saldo: ";
    cin >> saldo;
    idProducto = 0;
}
void Cliente::imprimir()
{
    cout << "DATOS DE CLIENTE:" << endl;
    cout << "-----------------" << endl;
    cout << "DNI: " << DNI << endl;
    cout << "saldo: " << saldo << endl;
    idProducto->imprimir();
}
void Cliente::comprar(Producto *ptrProducto)
{
    int cantidad = 0;
    cout << "ingrese la cantidad a comprar: ";
    cin >> cantidad;
    if (cantidad <= ptrProducto->getCantidad())
    {
        ptrProducto->disminuir(cantidad);
        saldo = ptrProducto->getPrecio() * cantidad;
        idProducto=ptrProducto;
    }
}
void Cliente::devolver(Producto *ptrProducto)
{
    int cantidadDevolucion = 0;
    int cantidadVendida = saldo / ptrProducto->getPrecio();
    cout << "ingrese la cantidad a devolver: ";
    cin >> cantidadDevolucion;
    if (cantidadVendida >= cantidadDevolucion)
    {
        ptrProducto->aumentar(cantidadDevolucion);
        saldo = saldo - (ptrProducto->getPrecio() * (cantidadVendida - cantidadDevolucion));
    }
}