#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include "persona.h"
#include <iostream>
using namespace std;

class Trabajador: public Persona
{
private:
      int codigo_trabajador;
      string producto_vendido;
      string almacen_trabajo;
      int codigo_prodvendido;
  public:
      Trabajador(string nombre_trabajdor,long dni_trabajador,string almacen_trabajo,int cod_trabajor);
      ~Trabajador();
      int getCodigoTrabajador();
      void setCodProductoVendido(int cod_producto);
      int getCodProductoVendido();
      string getAlmacenTrabajo();
};

#endif // TRABAJADOR_H
