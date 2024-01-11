#include <iostream>
#include "functions.hpp"

/**
 * @brief Función principal para jugar el juego.
 *
 * Esta función permite al usuario jugar el juego de adivinanzas.
 *
 * @param modoJuego El modo de juego seleccionado.
 * @param min El valor mínimo del intervalo.
 * @param max El valor máximo del intervalo.
 * @param oportunidades El número de oportunidades para adivinar.
 */
void jugar(int modoJuego, int min, int max, int oportunidades) {
    // Generar un número secreto aleatorio dentro del rango especificado
    int numeroSecreto = generarNumeroAleatorio(min, max);
    int intento = 1;

    // Mostrar mensaje de bienvenida
    std::cout << "¡Adivina el número secreto entre " << min << " y " << max << "!\n" << std::endl;

    // Ciclo principal del juego
    while (intento <= oportunidades) {
        // Solicitar la respuesta del usuario
        std::cout << "Intento " << intento << ": " << std::endl;
        int respuestaUsuario;
        std::cin >> respuestaUsuario;

        // Verificar si la respuesta es correcta
        if (respuestaUsuario == numeroSecreto) {
            // Mostrar pistas y salir del juego
            mostrarPistas(numeroSecreto, intento, respuestaUsuario, modoJuego);
            break;
        } else {
            // Mostrar pistas y continuar con el siguiente intento
            mostrarPistas(numeroSecreto, intento, respuestaUsuario, modoJuego);
            intento++;
        }
    }

    // Informar si se agotaron las oportunidades
    if (intento > oportunidades) {
        std::cout << "¡Lo siento! Has agotado tus oportunidades. El número secreto era " << numeroSecreto << ".\n";
    }
}
