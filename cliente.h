#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "persona.h"
#include "producto.h"
using namespace std;

class Cliente:public Persona
{
private:
    string producto_comprado;
    float importe_pagado;
    int cod_producto;

public:
    Cliente(string nombre_cliente,long dni_cliente,int id_producto);
    ~Cliente();
    string getProductoComprado();
    void setProductoComprado(Producto *producto[],int longitud_productos);
    string getNameProduct(Producto *producto);
    float getImporteVenta();
    string getNombre_cliente();

};

#endif // CLIENTE_H
