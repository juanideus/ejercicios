//
// Created by Juani on 04-10-2025.
//

#include "Persona.h"

Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

string Persona::toString() {
    return "mi nombre es: " + nombre + "\n" +
    "edad: " + to_string(edad) + "\n";
}
