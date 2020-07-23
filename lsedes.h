#ifndef LSEDES_H
#define LSEDES_H
#include <iostream>
#include "sede.h"
using namespace  std;
class Lsedes
{
    private:
        string lista_sedes[50];
        int lista_tiempo[50];
        int tamanio;
    public:

        Lsedes(Sede *sede[], int lenght);
        void getListaSedes();

        ~Lsedes();

};

#endif // LSEDES_H
