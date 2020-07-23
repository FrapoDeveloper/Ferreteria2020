#ifndef LPRODUCTOS_H
#define LPRODUCTOS_H
#include <iostream>
#include "producto.h"
using namespace  std;

class Lproductos
{
private:
    string producto_seleccionado;
    float importe_selecionado;
    int id_producto;
public:
    Lproductos(Producto *producto);
    ~Lproductos();
    string getProductoSeleccionado();
    float getImporteSeleccioando();
    int getIdProducto();
    void getListaProductos();
};

#endif // LPRODUCTOS_H
