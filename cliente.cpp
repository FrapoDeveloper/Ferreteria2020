#include "cliente.h"
#include "persona.h"
#include "producto.h"

Cliente::Cliente(string nombre_cliente,long dni_cliente,int cod_producto):Persona(nombre_cliente,dni_cliente)
{
    this->cod_producto = cod_producto;
}

void Cliente::setProductoComprado(Producto *productos[],int longitud_productos){
     for(int i=0;i<=longitud_productos-1;i++){
         if(cod_producto==productos[i]->getIdProducto()){
             this->producto_comprado = productos[i]->getNombreProducto();
             this->importe_pagado = productos[i]->getCostoProducto();
         }

     }
}

string Cliente::getProductoComprado(){
    return  producto_comprado;
}

string Cliente::getNameProduct(Producto *producto){
    return producto->getNombreProducto();
}
float Cliente::getImporteVenta(){
    return  importe_pagado;
}
