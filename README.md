# ProyectoPOO
Proyecto de uso de clases y objetos
En este proyecto de la materia de programacion orientada a objetos seleccione un problema a resolver que involucre diferentes clases y objetos. El problema es que en un taller mecánico se manejan diferentes tipos de información que puede llegar a ser desordenada, como los vehículos que llegan, los mecánicos que trabajan ahí y los servicios que se realizan. Siempre se escribe todo eso en una libreta, lo cual es desordenado. El proyecto busca representar esa información de una forma facil usando programación orientada a objetos. 

# Contexto

Este proyecto es sobre un taller mecánico. La idea es tener clases básicas que representen cosas del taller: un vehículo, un mecánico y un servicio. Cada clase guarda información sencilla y puede mostrarla en pantalla.

# Funcionalidad

El programa crea:

un vehículo con marca y modelo,

un mecánico con su nombre,

un servicio con su tipo y costo.

Después, muestra esos datos en consola y también imprime mensajes como la descripción del vehículo, una bienvenida del mecánico y el costo del servicio.

#Menu 

El menu tiene 6 opciones a considerar:

0. Opcion de salir del programa al haber pasado por las demas opciones, o si el usuario quiere salir en cualquier momento. 
1. Opcion de agregar el vehiculo
2. Opcion de agregar el servicio que se le dara al vehiculo
3. Opcion de mostrar lo que lleva por ahora el taller (los vehiculos con sus respectivos servicios)
4. Opcion de agregar al cliente con su nombre, apellido, edad, etc.
5. Opcion de mostrar al mecanico que dara el servicio.


# Cosas que harian tronar el codigo

1. Si el usuario escribe texto donde esperas un número (por ejemplo en edad o costo), cin entra en un estado de error. 
2. Si el usuario mete un valor no numérico, cin falla y opcion no se actualiza, por lo que probablemente te saque del programa o se ciclara el menu hasta que sea una opcion valida.


# Consideraciones

Corre en consola.

Está hecho en C++ normal.

1. Entrar a carpeta donde se encuentre el "mainpoo.cpp" y donde se encuentren los demas .h

2. Compilar con: "g++ mainpoo.cpp -o taller". Esto genera el archivo ejecutable

3.  Ejecute el siguiente comando: taller

# Correcciones

