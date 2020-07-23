#ifndef VENTA_H
#define VENTA_H
#include <iostream>
#include "cliente.h"
#include "trabajador.h"
#include "lproductos.h"
using namespace  std;

class Venta
{
private:
     string producto_vendido;
     float importe_venta;
     string cliente_venta;
     int trabajador_venta;

public:
     Venta(Lproductos *productos_disponibles[],int longitud_productos,int cod_producto,Cliente *cliente, int id_trabajador);
     string getProductoVendido();
     float getImporteVendido();
     string getClienteVenta();
     int getTrabajadorVenta();

     ~Venta();
};

#endif // VENTA_H
