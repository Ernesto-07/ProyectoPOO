/*
 * Clase Persona
 * Clase base para Cliente y Mecanico.
 * Contiene atributos comunes: nombre, apellido y edad.
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona {
protected: // protegido para que las subclases puedan acceder
    string nombre;   // nombre de la persona
    string apellido; // apellido de la persona
    int edad;        // edad de la persona

public:
    // Constructor con parametros: inicializa con valores dados
    Persona(string n, string a, int e) {
        nombre = n;
        apellido = a;
        edad = e;
    }

    // Getters para acceder a los atributos
    string get_nombre() { return nombre; }
    string get_apellido() { return apellido; }
    int get_edad() { return edad; }

    // Método común para mostrar información de la persona
    void describir() {
        cout << "Persona: " << nombre << " " << apellido
             << " | Edad: " << edad << endl;
    }
};

#endif