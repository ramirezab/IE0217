#include <iostream>
#include <cstdlib>
#include <ctime>

// Funciones para implementar el juego
int generarNumeroAleatorio(int min, int max);
void mostrarPistas(int numeroSecreto, int intento, int estimacion);
void jugar(int modoJuego, int min, int max, int oportunidades);

int main() {
    // Semilla para generar números aleatorios
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
        case 1:
        case 2: {
            int min, max, oportunidades;

            // Obtener el intervalo y el número de oportunidades
            std::cout << "Ingrese el valor mínimo del intervalo: ";
            std::cin >> min;
            std::cout << "Ingrese el valor máximo del intervalo: ";
            std::cin >> max;
            std::cout << "Ingrese el número de oportunidades (un tercio del tamaño del intervalo): ";
            std::cin >> oportunidades;

            // Validar la opción del modo de juego
            if (opcion == 1) {
                jugar(1, min, max, oportunidades);
            } else {
                jugar(2, min, max, oportunidades);
            }
            break;
        }
        case 3:
            std::cout << "Gracias por jugar. Hasta luego.\n";
            break;
        default:
            std::cout << "Opción no válida. Saliendo del juego.\n";
            break;
    }

    return 0;
}

// Función para generar un número aleatorio dentro de un intervalo
int generarNumeroAleatorio(int min, int max) {
    return std::rand() % (max - min + 1) + min;
}

// Función para mostrar pistas al usuario según el modo de juego
void mostrarPistas(int numeroSecreto, int intento, int estimacion) {
    if (estimacion == 0) {
        std::cout << "¡Felicidades! Has adivinado el número secreto " << numeroSecreto << " en el intento " << intento << ".\n";
    } else {
        std::cout << "Intento " << intento << ": ";
        if (estimacion > 0) {
            std::cout << "Frío\n";
        } else {
            std::cout << "Caliente\n";
        }
    }
}

// Función principal para jugar el juego
void jugar(int modoJuego, int min, int max, int oportunidades) {
    int numeroSecreto = generarNumeroAleatorio(min, max);
    int intento = 1;

    std::cout << "¡Adivina el número secreto entre " << min << " y " << max << "!\n";

    while (intento <= oportunidades) {
        int estimacion;

        std::cout << "Intento " << intento << ": ";
        int respuestaUsuario;
        std::cin >> respuestaUsuario;

        if (respuestaUsuario == numeroSecreto) {
            mostrarPistas(numeroSecreto, intento, 0);
            break;
        } else {
            if (modoJuego == 1) {
                estimacion = (respuestaUsuario < numeroSecreto) ? -1 : 1;
            } else {
                // Modo desafiante: proporcionar pistas como "congelado", "frío", "caliente", "hirviendo"
                int diferencia = std::abs(numeroSecreto - respuestaUsuario);
                if (diferencia == 0) {
                    mostrarPistas(numeroSecreto, intento, 0);
                    break;
                } else if (diferencia <= 5) {
                    estimacion = 3;  // "hirviendo"
                } else if (diferencia <= 10) {
                    estimacion = 2;  // "caliente"
                } else if (diferencia <= 20) {
                    estimacion = 1;  // "frío"
                } else {
                    estimacion = -1;  // "congelado"
                }
            }

            mostrarPistas(numeroSecreto, intento, estimacion);
            intento++;
        }
    }

    if (intento > oportunidades) {
        std::cout << "¡Lo siento! Has agotado tus oportunidades. El número secreto era " << numeroSecreto << ".\n";
    }
}
