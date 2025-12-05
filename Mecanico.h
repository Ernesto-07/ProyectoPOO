/*
 * Clase Mecanico
 * Hereda de Persona.
 * Representa un mecánico con experiencia y cantidad de servicios realizados.
 */

#ifndef MECANICO_H
#define MECANICO_H

#include "Persona.h"
#include <iostream>
using namespace std;

class Mecanico : public Persona {
private:
    int experiencia; // años de experiencia
    int cantidad;    // cantidad de servicios realizados

public:
    // Constructor por defecto con datos ya definidos
    Mecanico();

    // Constructor con parámetros
    Mecanico(string n, string a, int e, int exp, int c);

    // Getters para acceder a los atributos
    int getExperiencia();
    int getCantidad();

    // Método para mostrar información del mecánico
    void bienvenida();
};


/**
 * Constructor por defecto vacío
 * @param
 * @return Mecanico
 */
Mecanico :: Mecanico() : Persona("", "", 0) {
    experiencia = 0;
    cantidad = 0;
}

/**
 * Constructor parametrizado
 * @param string n: el nombre del mecanico,
 *        string a: el apellido del mecanico,
 *        int e: la edad,
 *        int exp: experiencia del mecanico,
 *        int c: cantidad de servicios
 * @return 
 */
Mecanico :: Mecanico(string n, string a, int e, int exp, int c) 
    : Persona(n, a, e) {
    experiencia = exp;
    cantidad = c;
}

/**
 * getter de experiencia del mecanico
 *
 * @param
 * @return int: anos de experiencia del mecanico
*/           
int Mecanico :: getExperiencia(){ 
    return experiencia;
}


/**
 * getter de cantidad
 *
 * @param
 * @return int: cantidad de servicios realizados por el mecanico
*/       
int Mecanico :: getCantidad(){ 
    return cantidad;
}


/**
 * void bienvenida
 * no regresa nada 
 * @param
 * @return 
*/      
void Mecanico :: bienvenida (){
        cout << "Mecanico: " << nombre << " " << apellido
             << " | Edad: " << edad
             << " | Experiencia: " << experiencia << " anos"
             << " | Servicios realizados: " << cantidad << endl;
}

#endif
