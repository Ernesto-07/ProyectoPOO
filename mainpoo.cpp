#include <iostream>
using namespace std;

#include "Vehiculo.h"
#include "Taller.h"

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
