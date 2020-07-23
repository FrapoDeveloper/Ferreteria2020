#ifndef LPERSONAS_H
#define LPERSONAS_H
#include <iostream>
#include <trabajador.h>
#include <cliente.h>
using namespace  std;
class Lpersonas
{
private:
    string lista_clientes[100];
    string lista_trabajadores[100];
    int lista_dni_clientes[100];

    int listadni_trabajadores[100];
    string lista_almacen_traba[100];
    int tamanio_clientes,tamanio_trabajadores;
public:
    //sobrecarga de constructor en accion
  Lpersonas(Cliente *cliente[], int tamanio_cliente);
  Lpersonas(Trabajador *trabajador[],int tamanio_trabajador);
  void getListaClientes();
  void getListaTrabajadores();
};

#endif
