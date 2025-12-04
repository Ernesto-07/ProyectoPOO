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
    Servicio();

    // Constructor con parametros: inicializa con valores dados
    Servicio(string t, int c);

    // Getters para acceder a los atributos
    string getTipo();

    int getCosto();

    // Void porque no regresa ningun tipo, imprime para mostrar información del servicio
    void describir();

};


/**
 * Constructor por default
 *
 * @param
 * @return Objeto Servicio
*/
Servicio :: Servicio() {
        tipo = "";
        costo = 0;
    }


/**
 * Constructor donde recibe valores para llenar las variables 
 *
 * @param string t: tipo de servicio , int c: el costo 
 * @return
*/
Servicio :: Servicio(string t, int c) {
        tipo = t;
        costo = c;
    }


/**
 * getter de tipo
 *
 * @param
 * @return string: Tipo 
*/      
string Servicio :: getTipo() { 
    return tipo; 
}

/**
 * getter de costo
 *
 * @param
 * @return int: costo
*/      
int Servicio :: getCosto() { 
    return costo;
}


/**
 * void describir
 *
 * @param
 * @return 
*/      
void Servicio :: describir(){
        cout << "Servicio: " << tipo << " | Costo: $" << costo << endl;
    }

#endif
