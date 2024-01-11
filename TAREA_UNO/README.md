# Instrucciones Juego de Adivinanzas

Este programa implementa un juego donde se debe aviniar un numero al azar dentro de un interale siguiendo pistas en C++.

## Requisitos

- Compilador de C++ (La ejección de prueba de este juego se hizo con Mingw32 por lo que es el que se recomienda)
- Make (opcional, para facilitar la compilación)

## Instrucciones de Ejecución

1. Abre una terminal en el directorio del proyecto.

2. Compila el programa utilizando el siguiente comando:
    
    mingw32-make build

3. Ejecuta el juego con el siguiente comando

    adivina.x

4. Para limpiar los archivos utliza

    mingw32-make clean

## Ejecución manual

    g++ -std=c++11 -Wall -c functions.cpp -o functions.o
    g++ -std=c++11 -Wall -c main.cpp -o main.o
    g++ -std=c++11 -Wall main.o functions.o -o adivina.x



# Parte Teórica

1. ¿Cuál es la principal diferencia entre C y C++?

La principal diferencia entre C y C++ es que C++ es una extensión de C que incluye programación orientada a objetos, permitiendo un enfoque más modular y orientado a objetos en el desarrollo de software.

2. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.

En un lenguaje compilado, como C++, el código se traduce completamente antes de la ejecución, mientras que en un lenguaje interpretado, como Python, se traduce línea por línea durante la ejecución. C++ es óptimo para aplicaciones de alto rendimiento, mientras que Python es adecuado para desarrollo rápido y prototipado.

3. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?

El linker en C++ combina archivos objeto en un programa ejecutable, resolviendo referencias entre ellos. Su función principal es vincular las partes del programa y generar un ejecutable, siendo esencial para la creación de programas completos a partir de módulos compilados individualmente.

4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.

Los tipos de datos primarios en C++ incluyen int, float, char, etc., mientras que los tipos derivados incluyen arrays, pointers, structures, unions y classes. Los primeros representan valores básicos, mientras que los derivados proporcionan estructuras más complejas.

5. Defina qué significa inicializar y declarar una variable.

Declarar una variable implica especificar su tipo y nombre, reservando espacio en la memoria, mientras que inicializar implica asignar un valor inicial a esa variable. Declarar anuncia la existencia de la variable, y la inicialización le da un valor concreto.

6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?

La sobrecarga de funciones en C++ permite definir varias funciones con el mismo nombre pero con diferentes parámetros. Los beneficios incluyen una mayor flexibilidad y legibilidad del código.

7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.

Un puntero en C++ es una variable que almacena la dirección de memoria de otra variable. Por ejemplo, si tienes una variable int x = 10;, puedes tener un puntero que apunte a la dirección de memoria de x mediante int *ptr = &x;.

8. ¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.

Una variable global almacena su valor original en una función. Se elige usar variables globales cuando se necesita persistencia del valor entre diferentes llamadas de funciones.

9. Investigue y explique tres métodos comunes de la biblioteca string en C++.

Tres métodos comunes de la biblioteca string en C++ incluyen: length(), substr(), y find(). Estos métodos son fundamentales para manipular y trabajar con objetos de cadena.

10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?

La principal diferencia radica en que el bucle while verifica la condición antes de ejecutar el cuerpo del bucle, mientras que el bucle do-while ejecuta el cuerpo al menos una vez antes de verificar la condición.

11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.

No es permitido almacenar funciones directamente en una estructura en C++. Los datos se pueden encapsular en miembros privados y públicos, pero las funciones deben declararse y definirse por separado.

12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.

Dividir el código en archivos .hpp (encabezado), .cpp (fuente) y main.cpp es útil para mejorar la modularidad y la legibilidad del código. Los archivos .hpp contienen declaraciones, .cpp tiene definiciones, y main.cpp es el punto de entrada del programa.

13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.

Type Casting en C++ es la conversión explícita de un tipo de dato a otro. Se utiliza para evitar pérdida de datos o permitir operaciones entre diferentes tipos. Por ejemplo, (int) 3.14 convierte el valor de punto flotante 3.14 a un entero.

14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.

La sentencia goto no es recomendada en programación moderna debido a que puede dificultar la comprensión y el mantenimiento del código. En su lugar, se pueden usar estructuras de control como bucles (for, while) y condicionales (if, switch) para lograr los mismos resultados de manera más estructurada.

15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.

Las variables locales se almacenan en la pila de ejecución, mientras que las variables globales se almacenan en el segmento de datos. La diferencia radica en la vida útil y el alcance de las variables.

16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?

Pasar por valor implica copiar el valor de la variable, pasar por referencia implica pasar la dirección de memoria y por puntero implica pasar un puntero a la dirección de memoria.

17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.

Un puntero que apunta a un arreglo en C++ inicialmente apunta a la primera posición del arreglo. Para acceder a todos los datos del arreglo, se puede utilizar aritmética de punteros incrementando el puntero para avanzar a las siguientes posiciones del arreglo.

18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.

Los punteros dobles en C++ se utilizan para almacenar la dirección de otro puntero. Son beneficiosos en situaciones donde se manipulan matrices dinámicas o estructuras de datos más complejas. Un ejemplo sería la manipulación de matrices bidimensionales mediante la asignación dinámica de memoria.

19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++?

break termina la ejecución del bucle y sale de él, mientras que continue salta a la siguiente iteración del bucle sin ejecutar el código restante en esa iteración.

20. ¿Para qué se utiliza la directiva #ifndef?

La directiva #ifndef se utiliza para evitar la inclusión repetida de un archivo de encabezado en C++. Ayuda a prevenir errores de compilación al garantizar que el contenido del archivo de encabezado se incluya solo si aún no ha sido incluido.

21. ¿Qué es el puntero this en C++?

El puntero this en C++ es un puntero implícito que apunta al objeto actual. Se utiliza dentro de los métodos de una clase para referenciar el objeto en el que se está llamando el método.

22. ¿Qué es un puntero nullptr?

nullptr es un valor constante que puede ser asignado a un puntero en C++. Representa un puntero nulo y es preferido sobre usar NULL o 0 para indicar la ausencia de un objeto apuntado.

23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?

Un arreglo en C++ es una estructura de datos estática que almacena elementos del mismo tipo en posiciones de memoria contiguas. Una lista, como std::list, es una estructura de datos dinámica que puede crecer o decrecer durante la ejecución y no requiere posiciones de memoria contiguas.

24. ¿Qué es una función prototipo?

Una función prototipo en C++ es una declaración previa de una función antes de su definición. Proporciona información sobre el tipo de retorno de la función, los tipos de parámetros y el nombre de la función. Se utiliza para informar al compilador sobre la existencia de la función antes de su uso.

25. ¿Investigue qué es un memory leak?

Un memory leak en C++ ocurre cuando un programa asigna memoria dinámicamente pero no la libera adecuadamente antes de que el programa termine. Como resultado, la memoria asignada permanece inaccesible y no se puede recuperar, lo que puede llevar a un agotamiento gradual de los recursos del sistema. Es una práctica importante liberar la memoria adecuadamente utilizando delete o free según corresponda.


# Parte Automatización

1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?

Las variables en un Makefile suelen contener información para el compilador y el enlazador.

CC: Especifica el compilador a utilizar (por ejemplo, gcc para C).
CFLAGS: Contiene las opciones del compilador para la compilación de código fuente en C.
CXXFLAGS: Contiene las opciones del compilador para la compilación de código fuente en C++.
LDFLAGS: Contiene las opciones del enlazador, como rutas de bibliotecas y opciones de enlazado.
2. ¿De qué se compone una regla en un Makefile?

Una regla en un Makefile consta de tres partes principales:

Target: El objetivo o archivo que se está construyendo.
Prerequisites: Los archivos o dependencias necesarios para construir el objetivo.
Commands: Las acciones o comandos que deben ejecutarse para construir el objetivo a partir de sus dependencias.
3. Defina qué es un target y cómo se relaciona con sus prerequisitos.

Un target en un Makefile es el resultado que se desea construir. Se relaciona con sus prerequisitos, que son los archivos necesarios para construir el target. Si alguno de los prerequisitos se modifica más recientemente que el target, las acciones asociadas se ejecutarán para reconstruir el target.

4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?

-I: Especifica la ruta del directorio para buscar archivos de inclusión (headers).
-c: Indica al compilador que solo debe realizar la compilación y no la fase de enlazado, generando un archivo objeto (.o).
-o: Permite especificar el nombre del archivo de salida después de la compilación.
5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?

Las variables en un Makefile se definen utilizando la sintaxis NOMBRE = valor y se utilizan con $(NOMBRE). Tienen la utilidad de simplificar la escritura y mantenimiento del Makefile, permitiendo cambiar valores en un solo lugar.

6. ¿Qué utilidad tiene un @ en un Makefile?

El símbolo @ en un Makefile se utiliza para suprimir la impresión de la línea de comando en la salida estándar antes de ejecutarla. Ayuda a que el Makefile sea más limpio y legible al ocultar las acciones específicas que se están ejecutando.

7. ¿Para qué se utiliza .PHONY en un Makefile?

.PHONY en un Makefile se utiliza para indicar a make que un target no es realmente un archivo con ese nombre. Esto es útil para evitar conflictos si hay un archivo o directorio con el mismo nombre que un target en el sistema de archivos. 

Bibliografía
Stroustrup, B. (2013). "The C++ Programming Language," 4th ed., Addison-Wesley.

Sebesta, R. W. (2012). "Concepts of Programming Languages," 10th ed., Addison-Wesley.

Prata, S. (2012). "C++ Primer Plus," 6th ed., Addison-Wesley.

Stroustrup, B. (2014). "Programming: Principles and Practice Using C++," Addison-Wesley.

Deitel, P. J., & Deitel, H. M. (2017). "C++ How to Program," 9th ed., Pearson.






