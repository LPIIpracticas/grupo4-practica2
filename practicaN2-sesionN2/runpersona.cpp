#include "persona.h" 
#include "persona.cpp" 

int main(){

Persona juan;
Persona *maria=new Persona;
juan.ingresar();
juan.setDni(32341553);
juan.imprimir();

maria->ingresar();
maria->setEdad(43);
maria->imprimir();

    return 0;
}