/*
 * Clase Vehiculo
 * Representa un vehículo dentro del taller.
 * Contiene marca y modelo.
 */

#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
using namespace std;

class Vehiculo {
private:
    string marca;  // marca del vehiculo
    string modelo; // modelo del vehiculo

public:
    // Constructor por defecto: inicializa con valores vacios
    Vehiculo() {
        marca = "";
        modelo = "";
    }

    // Constructor con paametros: inicializa con valores dados
    Vehiculo(string m, string mod) {
        marca = m;
        modelo = mod;
    }

    // Getters para acceder a los atributos
    string get_marca() { return marca; }
    string get_modelo() { return modelo; }

    // Metodo para mostrar informacion del vehiculo
    void describir() {
        cout << "Vehiculo: " << marca << " " << modelo << endl;
    }
};

#endif
