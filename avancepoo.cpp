#include <iostream>
using namespace std;

class Vehiculo {
    private: 
        string marca;
        string modelo;
    public:
        Vehiculo(string m, string mod) {
            marca = m;
            modelo = mod;
        }

        string get_marca() {
            return marca;
        }
        
        string get_modelo() {
            return modelo;
        }

        void describir() {
            cout << "Vehiculo de marca " << marca << " y modelo " << modelo << endl;
        }
};

class Mecanico {
    private:
        string nombre;
    public:
        Mecanico(string n) {
            nombre = n;
        }

        string get_nombre() {
            return nombre;
        }

        void bienvenida() {
            cout << "Hola, soy el mecanico " << nombre << " y voy a realizar el servicio" << endl;
        }
};

class Servicio {
    private:
        string tipo;
        int costo;
    public:
        Servicio(string t, int c) {
            tipo = t;
            costo = c;
        }

        string get_tipo() {
            return tipo;
        }

        void describir() {
            cout << "El servicio de " << tipo << " tiene un costo de " << costo << " pesos" << endl;
        }
};

int main() {
    Vehiculo v1("Nissan", "Versa");
    Mecanico m1("Carlos");
    Servicio s1("Cambio de aceite", 500);

    cout << "Vehiculo: " << v1.get_marca() << endl;
    cout << "Mecanico: " << m1.get_nombre() << endl;
    cout << "Servicio: " << s1.get_tipo() << endl;

    v1.describir();
    m1.bienvenida();
    s1.describir();
}