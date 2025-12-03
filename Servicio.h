/*
 * Clase Servicio
 * Representa un servicio dentro del taller mecánico.
 * Contiene tipo de servicio y costo asociado.
 */

#ifndef SERVICIO_H
#define SERVICIO_H

#include <string>
#include <iostream>
using namespace std;

class Servicio {
private:
    string tipo;   // tipo de servicio (ej. cambio de aceite)
    int costo;     // costo del servicio en pesos

public:
    // Constructor por defecto: inicializa con valores vacíos
    Servicio() {
        tipo = "";
        costo = 0;
    }

    // Constructor con parametros: inicializa con valores dados
    Servicio(string t, int c) {
        tipo = t;
        costo = c;
    }

    // Getters para acceder a los atributos
    string get_tipo() { return tipo; }
    int get_costo() { return costo; }

    // Void porque no regresa ningun tipo, imprime para mostrar información del servicio
    void describir() {
        cout << "Servicio: " << tipo << " | Costo: $" << costo << endl;
    }
};

#endif