/*
 * Clase Cliente
 * Hereda de Persona.
 * Representa un cliente del taller con años de uso y cantidad de servicios realizados.
 */

#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include <iostream>
using namespace std;

class Cliente : public Persona {
private:
    int anos_uso;  // años de uso del taller
    int cantidad;  // cantidad de servicios realizados

public:
    // Constructor con parametros: inicializa atributos de Persona y Cliente
    Cliente(string n, string a, int e, int au, int c)
        : Persona(n, a, e) { // llamada al constructor de Persona
        anos_uso = au;
        cantidad = c;
    }

    // Getters para acceder a los atributos
    int get_anos_uso() { return anos_uso; }
    int get_cantidad() { return cantidad; }

    // Método para mostrar información del cliente
    void describir() {
        cout << "Cliente: " << nombre << " " << apellido
             << " | Edad: " << edad
             << " | Anos de uso: " << anos_uso //años(se puso anos por impresion)
             << " | Servicios realizados: " << cantidad << endl;
    }
};

#endif