//
// Created by Juani on 04-10-2025.
//

#ifndef EJERCICIOS_PERSONA_H
#define EJERCICIOS_PERSONA_H
#include <string>

using namespace std;
class Persona {
    string nombre;
    int edad;

    public:
    Persona(string nombre, int edad);
    string getNombre();
    int getEdad();

    string toString();
};


#endif //EJERCICIOS_PERSONA_H