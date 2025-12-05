/*
 * Clase Taller
 * Representa un taller mecánico.
 * Contiene vehículos y servicios mediante composición.
 */

#ifndef TALLER_H
#define TALLER_H

#define MAX 5 // se defne un maximo de 5

#include "Vehiculo.h"
#include "Servicio.h"
#include <string>
#include <iostream>
using namespace std;

class Taller {
private:
    string nombre; // nombre del taller

    Vehiculo vehiculos[MAX]; // arreglo de vehículos
    int totalVehiculos;     // contador de vehículos registrados

    Servicio servicios[MAX]; // arreglo de servicios
    int totalServicios;     // contador de servicios registrados

public:

    Taller();

    // Constructor: inicializa nombre y contadores
    Taller(string n);

    // Método para agregar un vehículo al taller
    void crearVehiculo(string marca, string modelo);

    // Método para agregar un servicio al taller
    void crearServicio(string tipo, int costo);

    // Método para mostrar el estado del taller
    void describir();
};

/**
 * Constructor por defecto
 * @param Taller
 * @return
 */
Taller :: Taller() {
    nombre = "";
    totalVehiculos = 0;
    totalServicios = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables 
 *
 * @param string t: tipo de servicio , int c: el costo 
 * @return
*/
Taller :: Taller(string n) {
        nombre = n;
        totalVehiculos = 0;
        totalServicios = 0;
    }

void Taller :: crearVehiculo(string marca, string modelo) {
        if (totalVehiculos < MAX) {
            vehiculos[totalVehiculos] = Vehiculo(marca, modelo);
            totalVehiculos++;
        } else {
            cout << "No se pueden agregar mas vehiculos." << endl;
        }
    }

void Taller :: crearServicio(string tipo, int costo) {
        if (totalServicios < MAX) {
            servicios[totalServicios] =  Servicio(tipo, costo);
            totalServicios++;
        } else {
            cout << "No se pueden agregar más servicios." << endl;
        }
    }

void Taller :: describir(){
        cout << "\n===== Estado del Taller =====" << endl;
        cout << "Taller: " << nombre << endl;

        cout << "\nVehiculos registrados:" << endl;
        if (totalVehiculos == 0) {
            cout << "  Ninguno" << endl;
        } else {
            for (int i = 0; i < totalVehiculos; i++) {
                vehiculos[i].describir();
            }
        }

        cout << "\nServicios disponibles:" << endl;
        if (totalServicios == 0) {
            cout << "  Ninguno" << endl;
        } else {
            for (int i = 0; i < totalServicios; i++) {
                servicios[i].describir();
            }
        }
    }



#endif
