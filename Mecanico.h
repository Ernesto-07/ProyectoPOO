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

    // Getters para acceder a los atributos
    int getExperiencia();
    int getCantidad();

    // Método para mostrar información del mecánico
    void bienvenida();
};

/**
 * Constructor donde recibe valores para llenar las variables 
 *
 * @param string n: nombre, string a: apellido, int e: edad,
 *          experiencia y cantidad como int. 
 *      Todos los datos ya los di definidos para que el 
 *      usuario solo vea el mecanico que dara el servicio. 
 * @return
*/
Mecanico :: Mecanico() : Persona("Carlos", "Hernandez", 40) {
        experiencia = 10;
        cantidad = 25;
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
