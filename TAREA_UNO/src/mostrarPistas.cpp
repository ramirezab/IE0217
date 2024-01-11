#include <iostream>
#include "functions.hpp"

/**
 * @brief Muestra pistas al usuario según el modo de juego.
 *
 * Esta función proporciona pistas al usuario sobre su estimación en comparación con
 * el número secreto, dependiendo del modo de juego seleccionado.
 *
 * @param numeroSecreto El número secreto que el usuario trata de adivinar.
 * @param intento El número de intento actual.
 * @param estimacion La estimación realizada por el usuario.
 * @param modoJuego El modo de juego seleccionado (1 o 2).
 */
void mostrarPistas(int numeroSecreto, int intento, int estimacion, int modoJuego) {
    if (estimacion == numeroSecreto) {
        // El usuario ha adivinado correctamente
        std::cout << "¡Felicidades! Has adivinado el número secreto " << numeroSecreto << " en el intento " << intento << ".\n";
    } else {
        // El usuario no ha adivinado correctamente, proporcionar pistas
        if (modoJuego == 1) {
            // Modo Fácil: Comparar si la estimación es mayor o menor que el número secreto
            if (estimacion > numeroSecreto) {
                std::cout << "El número ingresado es mayor" << std::endl;
            } else {
                std::cout << "El número ingresado es menor" << std::endl;
            }
        } else {
            // Modo Desafiante: Calcular la diferencia entre la estimación y el número secreto
            int diferencia = std::abs(numeroSecreto - estimacion);

            // Proporcionar pistas basadas en la diferencia
            if (diferencia <= 2) {
                std::cout << "Hirviendo" << std::endl;
            } else if (diferencia <= 5) {
                std::cout << "Caliente" << std::endl;
            } else if (diferencia <= 10) {
                std::cout << "Frío" << std::endl;
            } else {
                std::cout << "Congelado" << std::endl;
            }
        }
    }
}
