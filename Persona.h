/*
 * Clase Persona
 * Clase base para Cliente y Mecanico.
 * Contiene atributos comunes: nombre, apellido y edad.
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona {
protected: // protegido para que las subclases puedan acceder
    string nombre;   // nombre de la persona
    string apellido; // apellido de la persona
    float edad;        // edad de la persona

public:

    Persona();

    // Constructor con parametros: inicializa con valores dados
    Persona(string n, string a, float e);

    // Getters para acceder a los atributos
    string getNombre();

    string getApellido();

    float getEdad();

    // Método común para mostrar información de la persona
    void describir();
};


/**
 * Constructor por defecto
 * @param 
 * @return 
 */
Persona :: Persona() {
    nombre = "";
    apellido = "";
    edad = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables 
 *
 * @param string n: nombre, string a: apellido, float e: edad,
 * @return
*/
Persona :: Persona(string n, string a, float e){
        nombre = n;
        apellido = a;
        edad = e;
    }


/**
 * getter de nombre
 *
 * @param
 * @return string: nombre
*/      
string Persona :: getNombre(){ 
        return nombre;
    }


/**
 * getter de apellido
 *
 * @param
 * @return string: apellido
*/      
string Persona :: getApellido(){ 
        return apellido;
    }


/**
 * getter de edad
 *
 * @param
 * @return float: edad
*/      
float Persona :: getEdad(){ 
        return edad;
    }

    
/**
 * void de describir
 *
 * @param
 * @return 
*/      
void Persona :: describir(){
        cout << "Persona: " << nombre << " " << apellido
             << " | Edad: " << edad << endl;
    }

#endif