#include "producto.h"
#include "producto.cpp"

int main()
{
    char resp = ' ';
    Producto azucar;
    do
    {
        system("clear");
        azucar.ingresar();
        azucar.cambiarPrecio(5.43);
        azucar.imprimir();
        do
        {
            cout << "Desea continuar?(s/n): ";
            cin >> resp;
            resp=tolower(resp);
            if (resp != 's' && resp != 'n')
                cout << "ERROR: Ingrese solo 's' o 'n'..." << endl;
        } while (resp != 's' && resp != 'n');
    } while (resp == 's');
    return 0;
}