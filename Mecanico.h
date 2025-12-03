/*
 * Clase Mecanico
 * Hereda de Persona.
 * Representa un mecánico con experiencia y cantidad de servicios realizados.
 */

#ifndef MECANICO_H
#define MECANICO_H

#include "Persona.h"
#include <iostream>
using namespace std;

class Mecanico : public Persona {
private:
    int experiencia; // años de experiencia
    int cantidad;    // cantidad de servicios realizados

public:
    // Constructor por defecto con datos ya definidos
    Mecanico() : Persona("Carlos", "Hernandez", 40) {
        experiencia = 10;
        cantidad = 25;
    }

    // Getters para acceder a los atributos
    int get_experiencia() { return experiencia; }
    int get_cantidad() { return cantidad; }

    // Método para mostrar información del mecánico
    void bienvenida() {
        cout << "Mecanico: " << nombre << " " << apellido
             << " | Edad: " << edad
             << " | Experiencia: " << experiencia << " anos"
             << " | Servicios realizados: " << cantidad << endl;
    }
};

#endif