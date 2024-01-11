#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "functions.hpp"

/**
 * @brief Función principal del programa.
 *
 * La función principal del programa que ejecuta el Juego de Adivinanzas.
 *
 * @return 0 al finalizar el programa.
 */
int main() {
    // Semilla para generar números aleatorios utilizando la hora
    std::srand(std::time(0));

    // Menú del juego
    std::cout << "Bienvenido al Juego de Adivinanzas\n";
    std::cout << "1. Modo Fácil\n";
    std::cout << "2. Modo Desafiante\n";
    std::cout << "3. Salir\n";

    int opcion;
    std::cout << "Seleccione una opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1: {
            int min, max, oportunidades;
            // Obtener el intervalo y el número de oportunidades
            std::cout << "Ingrese el valor mínimo del intervalo: ";
            std::cin >> min;
            std::cout << "Ingrese el valor máximo del intervalo: ";
            std::cin >> max;
            oportunidades = round((max-min)/3);
            std::cout << "Tienes " << oportunidades << " oportunidades." << std::endl;

            // Iniciar el juego en el Modo Fácil
            jugar(1, min, max, oportunidades);
            std::cout << "Gracias por jugar. Hasta luego.\n";
            break;
        }
        case 2: {
            int min, max, oportunidades;
            // Obtener el intervalo y el número de oportunidades
            std::cout << "Ingrese el valor mínimo del intervalo: ";
            std::cin >> min;
            std::cout << "Ingrese el valor máximo del intervalo: ";
            std::cin >> max;
            oportunidades = round((max-min)/3);
            std::cout << "Tienes " << oportunidades << " oportunidades." << std::endl;

            // Iniciar el juego en el Modo Desafiante
            jugar(2, min, max, oportunidades);
            std::cout << "Gracias por jugar. Hasta luego.\n";
            break;
        }
        case 3:
            // Salir del juego
            std::cout << "Gracias por jugar. Hasta luego.\n";
            break;
        default:
            // Opción no válida
            std::cout << "Opción no válida. Saliendo del juego.\n";
            break;
    }

    return 0;
}
