#include "trabajador.h"
#include "persona.h"
Trabajador::Trabajador(string nombre_trabajador,long dni_trabajador,string almacen_trabajador,int cod_trabajador):Persona(nombre_trabajador,dni_trabajador)
{
this->codigo_prodvendido = cod_trabajador;
this->almacen_trabajo = almacen_trabajador;
}

string Trabajador::getAlmacenTrabajo(){
    return almacen_trabajo;
}

int Trabajador::getCodigoTrabajador(){
    return  codigo_trabajador;
}
void Trabajador::setCodProductoVendido(int cod_producto){
    this->codigo_prodvendido = cod_producto;
}

int Trabajador::getCodProductoVendido(){
    return codigo_prodvendido;
}
