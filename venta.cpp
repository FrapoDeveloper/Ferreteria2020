#include "venta.h"

Venta::Venta(Lproductos *productos[],int numero_productos,int id_producto, Cliente *cliente,int id_trabajador)
{
    this->importe_venta=0;
    for(int i = 0; i<=numero_productos; i++){
        if(id_producto == i){
            this->producto_vendido = productos[i]->getProductoSeleccionado();
            this->importe_venta = productos[i]->getImporteSeleccioando();
            this->cliente_venta = cliente->getNombrePersona();
            this->trabajador_venta = id_trabajador;
        }
    }

}

string  Venta::getProductoVendido(){
    return producto_vendido;
}
float Venta::getImporteVendido(){
    return importe_venta;
}

string Venta::getClienteVenta(){
    return  cliente_venta;
}
int Venta::getTrabajadorVenta(){
    return  trabajador_venta;
}


Venta::~Venta()
{

}
