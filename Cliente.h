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
    float anosUso;  // años de uso del coche
    float cantidad;  // cantidad de servicios realizados

public:
    //DECLARACION DE LOS METODOS QUE TENDRA EL OBJETO

    Cliente();
    
    // Constructor con parametros: inicializa atributos de Persona y Cliente
    Cliente(string n, string a, float e, float au, float c);

    // Getters para acceder a los atributos
    float getAnosUso(); 

    float getCantidad();

    // Método para mostrar información del cliente
    void describir();

    
};

// DEFINICIONES DE CADA METODO

/**
 * Constructor por default
 *
 * @param
 * @return Cliente
*/
Cliente :: Cliente() : Persona("", "", 0) {
    anosUso = 0;
    cantidad = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables
 *
 * @param string n: el nombre del cliente,
 *        string a: el apellido del cliente,
 *        float e: la edad,
 *        float au: años de uso del coche,
 *        float c: cantidad de servicios
 */
Cliente :: Cliente (string n, string a, float e, float au, float c) 
    : Persona(n, a, e){ // llamada al constructor de Persona
        anosUso = au;
        cantidad = c;
    }



//Getter de anos uso y cantidad de servicios

/**
 * getter anos uso
 *
 * @param
 * @return float: anos de uso
*/
float Cliente :: getAnosUso() { 
        return anosUso; 
    }


/**
 * getter cantidad servicios
 *
 * @param
 * @return float: cantidad de servicios
*/    
float Cliente :: getCantidad(){ 
        return cantidad;
    }



/**
 * void describir
 * no regresa nada 
 * @param
 * @return 
*/      
void Cliente :: describir(){
        cout << "Cliente: " << nombre << " " << apellido << endl;
            if(edad>0){
                cout << " | Edad: " << edad << endl;
            }
            else{
                cout << "Edad no valida" << endl;
            }
             
            if(anosUso > 0){
                cout << " | Anos de uso: " << anosUso << endl; //años(se puso anos por impresion)
            }
            else{
                cout << "Numero no valido" << endl;
            }

            if(cantidad > 0){
                cout << " | Servicios realizados: " << cantidad << endl;
            }
            else{
                cout << "Numero no valido" << endl;
            }
    }

#endif