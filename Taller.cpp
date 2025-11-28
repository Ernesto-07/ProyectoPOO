#include <iostream>
#include "Taller.h"

using namespace std;

// ----- MÉTODOS DE MECANICO -----

Mecanico::Mecanico(string n) {
    nombre = n;
}

string Mecanico::get_nombre() {
    return nombre;
}

void Mecanico::bienvenida() {
    cout << "Hola, soy el mecanico " << nombre 
         << " y voy a realizar el servicio" << endl;
}


// ----- MÉTODOS DE SERVICIO -----

Servicio::Servicio(string t, int c) {
    tipo = t;
    costo = c;
}

string Servicio::get_tipo() {
    return tipo;
}

void Servicio::describir() {
    cout << "El servicio de " << tipo 
         << " tiene un costo de " << costo << " pesos" << endl;
}