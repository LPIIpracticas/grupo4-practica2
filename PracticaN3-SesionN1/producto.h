#pragma once

class Producto
{
private:
    int idProducto;
    int cantidad;
    float precio;

public:
    void ingresar();
    void imprimir();
    void aumentar(int);
    void disminuir(int);
    float getPrecio();
    int getCantidad();
};