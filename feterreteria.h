#ifndef FETERRETERIA_H
#define FETERRETERIA_H
#include <iostream>
using namespace  std;
class Ferreteria
{
       private:

             string  nombre_ferreteria;

       public:
             Ferreteria(string nombre);

             string  getNombreFerreteria();

             ~Ferreteria();
};

#endif // FETERRETERIA_H
