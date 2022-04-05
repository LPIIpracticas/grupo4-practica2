#include "producto.h"
#include "producto.cpp"
#include "funcionesproducto01.h"

int main()
{
    char resp = ' ';

    Producto azucar;
    do
    {
        system("clear");
        int opc = menu();
        ejecutaMetodos(opc, &azucar);
        do
        {
            system("clear");
            cout << "Desea continuar?(s/n): ";
            cin >> resp;
            resp = tolower(resp);
            if (resp != 's' && resp != 'n')
                cout << "ERROR: Ingrese solo 's' o 'n'..." << endl;
            system("pause");
        } while (resp != 's' && resp != 'n');
    } while (resp == 's');
    return 0;
}