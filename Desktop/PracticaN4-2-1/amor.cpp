#include "amor.h"
#include "amor.cpp"
#include "fecha.h"
#include "fecha.cpp"
class Amor
{
    void Amor::iniciar()
    {
        fechaInicio.ingresar();
        fecha fechaFin;
        cout << "cual Es la Intensidad: ";
        cin >> intensidad;
        cout << "A cuantos amas: ";
        cin >> nroAmantes;
        quienes = new string[nroAmantes];
        cout << "A quienes amas: ";
        for (int i = 0; i < nroAmantes; i++)
        {
            cout << "Ingrese amante: ";
            getline(cin, quienes[i]);
        }
    }

    void Amor::crespetar()
    {
    }
    void Amor::confiar()
    {
    }
    void Amor::lealtad() {}
    void Amor::serFeliz() {}