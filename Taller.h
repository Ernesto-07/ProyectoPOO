#ifndef TALLER_H
#define TALLER_H

#include <string>
#include <iostream>
using namespace std;

// ---------------- PERSONA ----------------
class Persona {
protected:
    string nombre;
    string apellido;
    int edad;

public:
    Persona() {
        nombre = "";
        apellido = "";
        edad = 0;
    }

    Persona(string n, string a, int e) {
        nombre = n;
        apellido = a;
        edad = e;
    }

    string get_nombre() { return nombre; }
};

// ---------------- CLIENTE ----------------
class Cliente : public Persona {
private:
    int numero_visitas;

public:
    Cliente() : Persona() { numero_visitas = 0; }

    Cliente(string n, string a, int e, int visitas)
        : Persona(n, a, e) {
        numero_visitas = visitas;
    }

    int get_visitas() { return numero_visitas; }
};

// ---------------- MECANICO ----------------
class Mecanico : public Persona {
private:
    int experiencia;

public:
    Mecanico() : Persona() { experiencia = 0; }

    Mecanico(string n, string a, int e, int exp)
        : Persona(n, a, e) {
        experiencia = exp;
    }

    void bienvenida() {
        cout << "Soy el mecanico " << nombre << ", listo para ayudarte." << endl;
    }
};

// ---------------- SERVICIO ----------------
class Servicio {
private:
    string tipo;
    int costo;

public:
    Servicio() {
        tipo = "";
        costo = 0;
    }

    Servicio(string t, int c) {
        tipo = t;
        costo = c;
    }

    string get_tipo() { return tipo; }

    void describir() {
        cout << "Servicio: " << tipo << ", costo: $" << costo << endl;
    }
};

// ---------------- TALLER ----------------
class Taller {
private:
    string nombre;

    Cliente clientes[5];
    int total_clientes;

    Servicio servicios[5];
    int total_servicios;

    Vehiculo vehiculos[5];
    int total_vehiculos;

public:
    Taller(string n) {
        nombre = n;
        total_clientes = 0;
        total_servicios = 0;
        total_vehiculos = 0;
    }

    // --- AGREGACIÓN ---
    void agregarCliente(Cliente c) {
        if (total_clientes < 5) {
            clientes[total_clientes] = c;
            total_clientes++;
        }
    }

    void agregarServicio(Servicio s) {
        if (total_servicios < 5) {
            servicios[total_servicios] = s;
            total_servicios++;
        }
    }

    // --- COMPOSICIÓN ---
    void agregarVehiculo(string marca, string modelo) {
        if (total_vehiculos < 5) {
            vehiculos[total_vehiculos] = Vehiculo(marca, modelo);
            total_vehiculos++;
        }
    }

    void describir() {
        cout << "Taller: " << nombre << endl;
    }
};

#endif
