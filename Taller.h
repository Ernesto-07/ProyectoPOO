#ifndef TALLER_H
#define TALLER_H

#include <string>
using namespace std;

class Mecanico {
private:
    string nombre;

public:
    Mecanico(string n);
    string get_nombre();
    void bienvenida();
};

class Servicio {
private:
    string tipo;
    int costo;

public:
    Servicio(string t, int c);
    string get_tipo();
    void describir();
};

#endif