#include "lsedes.h"

Lsedes::Lsedes(Sede *sedes[],int tamanio)
{
    this->tamanio = tamanio;
    for(int i=0;i<tamanio;i++){
        this->lista_sedes[i] = sedes[i]->getNombreSede();
        this->lista_tiempo[i] = sedes[i]->getTiempoSede();
    }

}

void Lsedes::getListaSedes(){
    cout<<"\t\t\tSEDES"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    for(int i= 0; i<tamanio ; i++){
      cout<<"Sede: "<<lista_sedes[i]<<"\t\tTiempo: "<<lista_tiempo[i]<<" anios."<<endl;

    }
    cout<<"--------------------------------------------------------------"<<endl;

}
