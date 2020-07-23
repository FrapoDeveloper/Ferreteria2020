#ifndef SEDE_H
#define SEDE_H
#include <iostream>
using namespace std;

class Sede
{
    private:
       string nombre_sede;
       int tiempo_sede;
   public:
       string getNombreSede(){
           return nombre_sede;
       }
       int getTiempoSede(){
           return  tiempo_sede;
       }
       Sede(string nombre_sede,int tiempo_sede);
};

#endif // SEDE_H
