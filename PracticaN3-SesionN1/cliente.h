#pragma once
#include "producto.h"

class Cliente
{
private:
    int DNI;
    float saldo;
    Producto *idProducto;

public:
    void ingresar();
    void imprimir();
    void comprar(Producto *);
    void devolver(Producto *);
};