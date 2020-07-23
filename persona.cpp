#include "persona.h"


Persona::Persona(string nombre_p,long dni_p)
{
    this->nombre_persona = nombre_p;
    this->dni_persona = dni_p;
}

string Persona::getNombrePersona(){
    return nombre_persona;
}

long Persona::getDniPersona(){
    return dni_persona;
}

Persona::~Persona(){}
