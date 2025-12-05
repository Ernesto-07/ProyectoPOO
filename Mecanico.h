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
    float experiencia; // años de experiencia
    float cantidad;    // cantidad de servicios realizados

public:
    // Constructor por defecto con datos ya definidos
    Mecanico();

    // Constructor con parámetros
    Mecanico(string n, string a, float e, float exp, float c);

    // Getters para acceder a los atributos
    float getExperiencia();
    float getCantidad();

    // Setter para actualizar la experiencia del mecánico
    void setExperiencia(float exp);

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
 *        float e: la edad,
 *        float exp: experiencia del mecanico,
 *        float c: cantidad de servicios
 * @return 
 */
Mecanico :: Mecanico(string n, string a, float e, float exp, float c) 
    : Persona(n, a, e) {
    experiencia = exp;
    cantidad = c;
}

/**
 * getter de experiencia del mecanico
 *
 * @param
 * @return float: anos de experiencia del mecanico
*/           
float Mecanico :: getExperiencia(){ 
    return experiencia;
}


/**
 * getter de cantidad
 *
 * @param
 * @return float: cantidad de servicios realizados por el mecanico
*/       
float Mecanico :: getCantidad(){ 
    return cantidad;
}

/**
 * sstter de experiencia
 *
 * @param float: experiencia
 * @return 
*/   
void Mecanico :: setExperiencia(float exp) {
    experiencia = exp;
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