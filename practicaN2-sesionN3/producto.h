#pragma once

#include <string>

using namespace std;

class Producto
{
private:
    int id;
    string nombre;
    string descripcion;
    int cantidad;
    float precio;
    char estado;

public:
    // métodos de servicio
    void imprimir();
    void ingresar();
    // interface de clase
    void aumentarStock(int c);
    void disminuirStock(int c);
    float calcularIGV();
    void cambiarPrecio(float p);
    float valorProducto();
    float aplicarDescuento(float);
    // getters
    int getId();
    string getNombre();
    string getDescripcion();
    int getCantidad();
    float getPrecio();
    char getEstado();
    // setters
    void setId(int);
    void setNombre(string);
    void setDescripcion(string);
    void setCantidad(int);
    void setPrecio(float);
    void setEstado(char);
};