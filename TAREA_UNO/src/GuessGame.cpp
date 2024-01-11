#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

// Funciones para implementar el juego
int generarNumeroAleatorio(int min, int max);
void mostrarPistas(int numeroSecreto, int intento, int estimacion);
void jugar(int modoJuego, int min, int max, int oportunidades);

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

            jugar(2, min, max, oportunidades);
            std::cout << "Gracias por jugar. Hasta luego.\n";
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
void mostrarPistas(int numeroSecreto, int intento, int estimacion, int modoJuego) {
    if (estimacion == numeroSecreto) {
        std::cout << "¡Felicidades! Has adivinado el número secreto " << numeroSecreto << " en el intento " << intento << ".\n";
    } 
    
    else {
        if (modoJuego == 1){
            if (estimacion > numeroSecreto) {
                std::cout << "El número ingresado es mayor"<< std::endl;
            } else {
                std::cout << "El número ingresado es menor"<< std::endl;
            }
        }
        else {
            int diferencia = std::abs(numeroSecreto - estimacion);

            if (diferencia <= 2) {
                    std::cout << "Hirviendo"<< std::endl;
                } else if (diferencia <= 5) {
                    std::cout << "Caliente"<< std::endl;
                } else if (diferencia <= 10) {
                    std::cout << "Frío"<< std::endl;
                } else {
                    std::cout << "Congelado"<< std::endl;
                }
        }
    }
}

// Función principal para jugar el juego
void jugar(int modoJuego, int min, int max, int oportunidades) {
    int numeroSecreto = generarNumeroAleatorio(min, max);
    int intento = 1;

    std::cout << "¡Adivina el número secreto entre " << min << " y " << max << "!\n" << std::endl;

    while (intento <= oportunidades) {
        int estimacion;

        std::cout << "Intento " << intento << ": " << std::endl;
        int respuestaUsuario;
        std::cin >> respuestaUsuario;

        if (respuestaUsuario == numeroSecreto) {
            mostrarPistas(numeroSecreto, intento, respuestaUsuario, modoJuego);
            break;
        } else {
            
            mostrarPistas(numeroSecreto, intento, respuestaUsuario, modoJuego);
            intento++;
        }
    }

    if (intento > oportunidades) {
        std::cout << "¡Lo siento! Has agotado tus oportunidades. El número secreto era " << numeroSecreto << ".\n";
    }
}
