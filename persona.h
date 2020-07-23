#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace  std;

class Persona
{
  private:
     string nombre_persona;
     long dni_persona;
  public:
     Persona(string,long);
     ~Persona();
     string getNombrePersona();
     long getDniPersona();
};

#endif // PERSONA_H
