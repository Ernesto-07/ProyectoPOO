/*
 * Clase Vehiculo
 * Representa un vehículo dentro del taller.
 * Contiene marca y modelo.
 */

#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
using namespace std;

class Vehiculo {
private:
    //DECLARACION DE VARIABLES

    string marca;  // marca del vehiculo
    string modelo; // modelo del vehiculo

public:
    //DECLARACION DE LOS METODOS QUE TENDRA EL OBJETO

    // Constructor por defecto: inicializa con valores vacios
    Vehiculo();

    // Constructor con paametros: inicializa con valores dados
    Vehiculo(string m, string mod);

    // Getters para acceder a los atributos
    string getMarca();
    string getModelo();

    // Metodo para mostrar informacion del vehiculo
    void describir();
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Vehiculo
*/
Vehiculo :: Vehiculo() {
        marca = "";
        modelo = "";
    }


/**
 * Constructor donde recibe valores para llenar las variables 
 *
 * @param string m: la marca , string mod: el modelo
 * @return
*/
Vehiculo :: Vehiculo(string m, string mod) {
        marca = m;
        modelo = mod;
    }


/**
 * getter de marca
 *
 * @param
 * @return string: marca del vehiculo
*/       
string Vehiculo :: getMarca() { 
        return marca; 
    }


/**
 * getter de modelo
 *
 * @param
 * @return string: modelo del vehiculo
*/           
string Vehiculo :: getModelo() { 
        return modelo; 
    }

/**
 * void describir
 * no regresa nada 
 * @param
 * @return 
*/      
void Vehiculo :: describir() {
        cout << "Vehiculo: " << marca << " " << modelo << endl;
    }

#endif