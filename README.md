# ProyectoPOO
Proyecto de uso de clases y objetos
En este proyecto de la materia de programacion orientada a objetos seleccione un problema a resolver que involucre diferentes clases y objetos. El problema es que en un taller mecánico se manejan diferentes tipos de información que puede llegar a ser desordenada, como los vehículos que llegan, los mecánicos que trabajan ahí y los servicios que se realizan. Siempre se escribe todo eso en una libreta, lo cual es desordenado. El proyecto busca representar esa información de una forma facil usando programación orientada a objetos. 

# Contexto

Este proyecto es sobre un taller mecánico. La idea es tener clases básicas que representen cosas del taller: un vehículo, un mecánico y un servicio. Cada clase guarda información sencilla y puede mostrarla en pantalla.

# Funcionalidad

El programa crea:

una persona que va a heredar a mecanico y cliente, 

un mecánico con su nombre, apellido, edad, experiencia,

un cliente con su nombre, apellido, edad, anos de uso,

un vehículo con marca y modelo,

un servicio con su tipo y costo,

y un taller que se conectara por composicion a servicio y vehiculo.

Después, muestra esos datos en consola y también imprime mensajes como la descripción del vehículo, una bienvenida del mecánico y el costo del servicio.

# Diagrama de clases 

[UML](./UML.png)

# Menu 

El menu tiene 6 opciones a considerar:

0. Opcion de salir del programa al haber pasado por las demas opciones, o si el usuario quiere salir en cualquier momento. 
1. Opcion de agregar el vehiculo
2. Opcion de agregar el servicio que se le dara al vehiculo
3. Opcion de mostrar lo que lleva por ahora el taller (los vehiculos con sus respectivos servicios)
4. Opcion de agregar al cliente con su nombre, apellido, edad, etc.
5. Opcion de agregar al mecanico que dara el servicio.

# Uso de .fail y .clear

Use cin.fail y cin.clear para que cuando se ingrese un valor menor a 0 en los casos donde se pide un numero entero, se imprima que se ingrese un valor entero mayor a 0 y se vuelve a mostrar el menu para darle al usuario la opcion de volverlo a escribir. El .fail me va a funcionar para revisar si la entrada fallo y el .clear funciona para limpiar al cin, que va a seguir recibiendo datos despues de ser limpiado. En resumen, el .fail me va a decir si hubo un error (en este caso que el entero sea menor a 0) y el .clear es para borrar el dato que se habia guardado en el cin, y que pueda seguir recibiendo datos. El continue; es como decir que vuelva al inicio del ciclo ootra vez y no siga con las lineas de codigo de abajo. 

# Cosas que harian tronar el codigo

Al usuario poner un dato diferente al pedido en las opciones del menu lo sacara inmediatamente del programa.
1. Si el usuario escribe un tipo de dato no esperado (por ejemplo en edad o costo), simplemente sacara al usuario del programa.  


# Consideraciones

Corre en consola.

Está hecho en C++ normal.

1. Entrar a carpeta donde se encuentre el "mainpoo.cpp" y donde se encuentren los demas .h

2. Compilar con: "g++ mainpoo.cpp -o taller". Esto genera el archivo ejecutable

3.  Ejecute el siguiente comando: taller

# Correcciones

Modelo un diagrama de clase útil para solucionar un problema utilizando UML, que pertenece a la sub-competencia de Toma de decisiones SICT0302A, el diagrama de clases puedes ser observado desde este repositorio.

Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML, que pertenece a la sub-competencia de Toma de decisiones SICT0302A, el diagrama de clases puedes ser observado desde este repositorio.

Implemento herencia de manera correcta y util, que pertenece a la sub-competencia de Implementa SICT0303A. La herencia se puede ver cuando Cliente.h y Mecanico.h heredan de Persona.h. 

Impemento composición (o agregación) sieguiendo mi diagrama de clases, que pertenece a la sub-competencia de Implementa SICT0303A. Se implemento Composicion al conectar Vehiculo y Servicio mediante composicion a Taller. En mi codigo se ve cuando creo los objetos Vehiculos y Servicio dentro de Taller, lo que significa que si se elimina taller, tambien las otras dos. 

Implemento clases apegadas a requerimientos a partir de un modelo, que pertenece a la sub-competencia de Implementa SICT0303A. Se puede observar a lo largo de todo el codigo, cada clase pertenece a una parte del sistema y se apega a los requerimientos del modelo. 

Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc..., que pertenece a la sub-competencia de Estándares SICT0401A. Se agregaron comentarios en todo el codigo que especifican y explican los parametros y lo que se regresa. Tambien se cuido lo de limite de caracteres y las sangrias. 

Cumplo con estándares en mi repositorio: tiene un readme claro que explica el proyecto  (para que sirve,  para que no sirve y como se usa), no tiene archivos basura o versiones pasadas, que pertenece a la sub-competencia de Estándares SICT0401A. Se modifico el ReadMe para ser mucho mas claro y dejar en claro el contexto del proyecto y su funcionalidad, al igual de que como funciona y que hacer y no hacer.






