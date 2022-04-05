#include "producto.h"
#include "producto.cpp"

int main()
{
    Producto azucar;
    azucar.ingresar();
    azucar.cambiarPrecio(5.43);
    azucar.imprimir();

    return 0;
}