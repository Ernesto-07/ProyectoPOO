#include <iostream>
using namespace std;

#include "Vehiculo.h"
#include "Taller.h"

int main() {

    Taller t1("Taller Don Paco");

    Vehiculo v1("Nissan", "Versa");
    Cliente c1("Luis", "Pérez", 30, 5);
    Mecanico m1("Carlos", "Hernandez", 40, 10);
    Servicio s1("Cambio de aceite", 500);

    t1.agregarCliente(c1);
    t1.agregarServicio(s1);
    t1.agregarVehiculo("Nissan", "Versa");

    v1.describir();
    m1.bienvenida();
    s1.describir();

    t1.describir();

    return 0;
}
