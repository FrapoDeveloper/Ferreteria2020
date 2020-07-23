#include "lpersonas.h"
#include "persona.h"
#include "cliente.h"
#include "trabajador.h"
#include <iostream>
using namespace  std;
Lpersonas::Lpersonas(Cliente *cliente[],int tamanio_cliente)
{
    this->tamanio_clientes = tamanio_cliente;
    for(int i = 0; i<tamanio_cliente; i++){
       this->lista_clientes[i] = cliente[i]->getNombrePersona();
        this->lista_dni_clientes[i] =cliente[i]->getDniPersona();
    }
}
Lpersonas::Lpersonas(Trabajador *trabajador[],int tamanio_trabajador){
    this->tamanio_trabajadores = tamanio_trabajador;
    for(int i = 0; i<tamanio_trabajador; i++){
       this->lista_trabajadores[i] = trabajador[i]->getNombrePersona();
        this->listadni_trabajadores[i] = trabajador[i]->getDniPersona();
        this->lista_almacen_traba[i]= trabajador[i]->getAlmacenTrabajo();
    }
}

void Lpersonas::getListaClientes(){
    cout<<"\t\t\tCLIENTES"<<endl;
    cout<<"*****************************************"<<endl;
    for(int i = 0; i<tamanio_clientes; i++){
       cout<<"("<<i+1<<"): "<<lista_clientes[i]<<endl;
       cout<<"Dni: "<<lista_dni_clientes[i]<<endl;

    }
    cout<<"*****************************************"<<endl;

}


void Lpersonas::getListaTrabajadores(){
    cout<<"\t\t\tTRABAJADORES"<<endl;
    for(int i = 0; i<tamanio_trabajadores; i++){
      cout<<"\n*****************************************"<<endl;
      cout<<"("<<i+1<<"): "<<lista_trabajadores[i]<<endl;
      cout<<"DNI: "<<listadni_trabajadores[i]<<endl;
      cout<<"Almacen: "<<lista_almacen_traba[i]<<endl;

      cout<<"*****************************************"<<endl;

    }


}
