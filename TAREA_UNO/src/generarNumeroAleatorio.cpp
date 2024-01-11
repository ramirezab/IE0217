#include <iostream>
#include "functions.hpp"

/**
 * @brief Genera un número aleatorio dentro de un intervalo.
 *
 * Esta función utiliza la función std::rand() para generar un número aleatorio
 * dentro del rango especificado [min, max].
 *
 * @param min El valor mínimo del intervalo.
 * @param max El valor máximo del intervalo.
 * @return Un número aleatorio dentro del intervalo [min, max].
 */
int generarNumeroAleatorio(int min, int max) {
    return std::rand() % (max - min + 1) + min;
}
