#include "producto.h"
#include "producto.cpp"

#include "cliente.h"
#include "cliente.cpp"

#include <iostream>

using namespace std;

int main()
{
    Producto azucar, *ptrArroz=new Producto;
    Cliente Juan, Mario;

    azucar.ingresar();
    ptrArroz->ingresar();

    Juan.ingresar();
    Mario.ingresar();
    Juan.comprar(&azucar);
    Mario.comprar(ptrArroz);

    Juan.imprimir();
    Mario.imprimir();

    return 0;
}