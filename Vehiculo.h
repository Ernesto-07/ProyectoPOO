#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo {
private:
    string marca;
    string modelo;

public:
    Vehiculo(string m, string mod);
    string get_marca();
    string get_modelo();
    void describir();
};

#endif