#include "lproductos.h"
#include "producto.h"
Lproductos::Lproductos(Producto *producto)
{
    this->producto_seleccionado = producto->getNombreProducto();
    this->importe_selecionado = producto->getCostoProducto();
    this->id_producto = producto->getIdProducto();
}

Lproductos::~Lproductos()
{

}

string Lproductos::getProductoSeleccionado(){
    return  producto_seleccionado;
}
float Lproductos::getImporteSeleccioando(){
    return  importe_selecionado;
}
int Lproductos::getIdProducto(){
    return  id_producto;
}



