/*
 * Proyecto Taller Mecánico
 * Ernesto Alonso Beltran Acosta
 * A01710199
 * 05/12/2025
 */

/**
 * Descripción:
 * Este es un proyecto demo para la clase de Pensamiento 
 * Computacional Orientado a Objetos. Es un programa que 
 * captura vehículos y servicios de un taller mecánico, 
 * además de permitir registrar clientes y mecánicos 
 * como objetos independientes. El sistema permite 
 * mostrar el estado del taller y la información 
 * de clientes y mecánicos.
 */

//Bibliotecas
#include <iostream>   //para imprimir en consola
#include "Persona.h"  //clase base de Cliente y Mecanico
#include "Cliente.h"  //clase Cliente que hereda de Persona
#include "Mecanico.h" //clase Mecanico que hereda de Persona
#include "Vehiculo.h" //clase Vehiculo
#include "Servicio.h" //clase Servicio
#include "Taller.h"   //clase Taller que contiene Vehiculos y Servicios

using namespace std;

//Procedimiento menu
void menu() {
    //Imprime las opciones que va a tener el sistema
    cout << "\n===== MENU TALLER =====" << endl;
    cout << "1. Agregar Vehiculo \n";
    cout << "2. Agregar Servicio \n";
    cout << "3. Mostrar Taller \n";
    cout << "4. Agregar Cliente \n";
    cout << "5. Agregar Mecanico \n";
    cout << "0. Salir \n";
}

int main() {

    //Se crea el objeto Taller
    Taller t1("Taller Don Paco");

    //Se define un mecánico fijo con datos ya establecidos
    Mecanico mecanico1;  

    int opcion = 0; //control del menú, inicia en 0

    //Ciclo para que el sistema siga corriendo mientras no elija la opción salir
    //El rango válido de opciones es de 0 a 5
    while(opcion < 6 && opcion > -1) {

        //Impresión de menú
        menu();
        //Leer índice que selecciona la opción del menú
        cin >> opcion;

        //Condicionales para saber que opcion del menu
        if(opcion == 1) {
            //Caso 1: Agregar vehículo al taller
            string marca, modelo;
            cout << "Ingrese marca: ";
            cin >> marca;
            cout << "Ingrese modelo: ";
            cin >> modelo;
            t1.crearVehiculo(marca, modelo);
        }
        else if(opcion == 2) {
            //Caso 2: Agregar servicio al taller
            string tipo;
            int costo;
            cout << "Ingrese tipo de servicio (no uses espacios): ";
            cin >> tipo;
            cout << "Ingrese costo: ";
            cin >> costo;
            t1.crearServicio(tipo, costo);
        }
        else if(opcion == 3) {
            //Caso 3: Mostrar estado del taller
            t1.describir();
        }
        else if(opcion == 4) {
            //Caso 4: Agregar cliente (objeto independiente)
            string nombre, apellido;
            int edad, anosUso, cantidad;
            cout << "Ingrese nombre: ";
            cin >> nombre;
            cout << "Ingrese apellido: ";
            cin >> apellido;
            cout << "Ingrese edad: ";
            cin >> edad;
            cout << "Ingrese anos de uso del vehiculo: ";
            cin >> anosUso;
            cout << "Ingrese cantidad de servicios realizados: ";
            cin >> cantidad;
            Cliente c(nombre, apellido, edad, anosUso, cantidad);
            cout << "Cliente agregado correctamente:" << endl;
            c.describir();
        }
        else if(opcion == 5) {
            // Caso 5: Agregar mecánico con datos ingresados por el usuario
            string nombre, apellido;
            int edad, experiencia, cantidad;

            cout << "Ingrese nombre del mecanico: ";
            cin >> nombre;
            cout << "Ingrese apellido del mecanico: ";
            cin >> apellido;
            cout << "Ingrese edad: ";
            cin >> edad;
            cout << "Ingrese anos de experiencia: ";
            cin >> experiencia;
            cout << "Ingrese cantidad de servicios realizados: ";
            cin >> cantidad;

            Mecanico m(nombre, apellido, edad, experiencia, cantidad);
            cout << "Mecanico agregado correctamente:" << endl;
            m.bienvenida();
}
        else if(opcion == 0) {
            //Caso 0: Salir del programa
            cout << "Saliendo del programa..." << endl;
            break;
        }
        else {
            //Caso inválido
            cout << "Opción inválida, intente de nuevo." << endl;
        }
    }

    return 0;
}
