#include "Vehiculo.h"
#include <iostream>
using namespace std;

Vehiculo::Vehiculo(string m, string mod) {
    marca = m;
    modelo = mod;
}

string Vehiculo::get_marca() {
    return marca;
}

string Vehiculo::get_modelo() {
    return modelo;
}

void Vehiculo::describir() {
    cout << "Vehiculo de marca " << marca << " y modelo " << modelo << endl;
}