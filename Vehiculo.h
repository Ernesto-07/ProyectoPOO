#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
using namespace std;

class Vehiculo {
private:
    string marca;
    string modelo;

public:
    Vehiculo() {
        marca = "";
        modelo = "";
    }

    Vehiculo(string m, string mod) {
        marca = m;
        modelo = mod;
    }

    string get_marca() { return marca; }
    string get_modelo() { return modelo; }

    void describir() {
        cout << "Vehiculo: " << marca << " " << modelo << endl;
    }
};

#endif
