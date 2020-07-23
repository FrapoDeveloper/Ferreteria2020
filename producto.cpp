#include "producto.h"


Producto::Producto(string nombre_p,float costo_p,int id_p)
{
    this->id_producto = id_p;
    this->nombre_producto = nombre_p;
    this->costo_producto = costo_p;
}



float Producto::getCostoProducto(){

    if(costo_producto>100){
        costo_producto = costo_producto - (costo_producto*0.1);
    }else if(costo_producto>200){
        costo_producto = costo_producto - (costo_producto*0.2);
    }else if(costo_producto>300){
        costo_producto = costo_producto - (costo_producto*0.3);
    }
    return costo_producto;

}

string Producto::getNombreProducto(){
    return  nombre_producto;
}
int Producto::getIdProducto(){
    return id_producto;
}


Producto::~Producto()
{


}
