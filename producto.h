#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace  std;
class Producto
{
    private:
        string nombre_producto;
        float costo_producto;
        int id_producto;
    public:
        Producto(string nombre_producto ,float precio_producto,int id_producto);
        ~Producto();

        string getNombreProducto();
        float getCostoProducto();
        int getIdProducto();
};

#endif // PRODUCTO_H
