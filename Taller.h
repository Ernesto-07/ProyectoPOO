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
    int total_vehiculos;     // contador de vehículos registrados

    Servicio servicios[MAX]; // arreglo de servicios
    int total_servicios;     // contador de servicios registrados

public:
    // Constructor: inicializa nombre y contadores
    Taller(string n) {
        nombre = n;
        total_vehiculos = 0;
        total_servicios = 0;
    }

    // Método para agregar un vehículo al taller
    void agregarVehiculo(string marca, string modelo) {
        if (total_vehiculos < MAX) {
            vehiculos[total_vehiculos] = Vehiculo(marca, modelo);
            total_vehiculos++;
        } else {
            cout << "No se pueden agregar más vehículos." << endl;
        }
    }

    // Método para agregar un servicio al taller
    void agregarServicio(Servicio s) {
        if (total_servicios < MAX) {
            servicios[total_servicios] = s;
            total_servicios++;
        } else {
            cout << "No se pueden agregar más servicios." << endl;
        }
    }

    // Método para mostrar el estado del taller
    void describir() {
        cout << "\n===== Estado del Taller =====" << endl;
        cout << "Taller: " << nombre << endl;

        cout << "\nVehiculos registrados:" << endl;
        if (total_vehiculos == 0) {
            cout << "  Ninguno" << endl;
        } else {
            for (int i = 0; i < total_vehiculos; i++) {
                vehiculos[i].describir();
            }
        }

        cout << "\nServicios disponibles:" << endl;
        if (total_servicios == 0) {
            cout << "  Ninguno" << endl;
        } else {
            for (int i = 0; i < total_servicios; i++) {
                servicios[i].describir();
            }
        }
    }
};

#endif
