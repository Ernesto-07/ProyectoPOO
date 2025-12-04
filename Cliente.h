/*
 * Clase Cliente
 * Hereda de Persona.
 * Representa un cliente del taller con años de uso y cantidad de servicios realizados.
 */

#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include <iostream>
using namespace std;

//Declaracion de clase cliente que hereda de persona
class Cliente : public Persona {
private:
    //DECLARACION DE VARIABLES
    int anosUso;  // años de uso del coche
    int cantidad;  // cantidad de servicios realizados

public:
    //DECLARACION DE LOS METODOS QUE TENDRA EL OBJETO

    // Constructor con parametros: inicializa atributos de Persona y Cliente
    Cliente(string n, string a, int e, int au, int c);

    // Getters para acceder a los atributos
    int getAnosUso(); 

    int getCantidad();

    // Método para mostrar información del cliente
    void describir();

    
};

// DEFINICIONES DE CADA METODO


/**
 * Constructor donde recibe valores para llenar las variables
 *
 * @param string n: el nombre del cliente, string a: el apellido del cliente,
 *        int e: la edad, int au: anos de uso coche, int c: cantidad de servicios
 * @return
*/
Cliente :: Cliente (string n, string a, int e, int au, int c) 
    : Persona(n, a, e){ // llamada al constructor de Persona
        anosUso = au;
        cantidad = c;
    }



//Getter de anos uso y cantidad de servicios

/**
 * getter anos uso
 *
 * @param
 * @return int: anos de uso
*/
int Cliente :: getAnosUso() { 
        return anosUso; 
    }


/**
 * getter cantidad servicios
 *
 * @param
 * @return int: cantidad de servicios
*/    
int Cliente :: getCantidad(){ 
        return cantidad;
    }



/**
 * void describir
 * no regresa nada 
 * @param
 * @return 
*/      
void Cliente :: describir(){
        cout << "Cliente: " << nombre << " " << apellido
             << " | Edad: " << edad
             << " | Anos de uso: " << anosUso //años(se puso anos por impresion)
             << " | Servicios realizados: " << cantidad << endl;
    }

#endif
