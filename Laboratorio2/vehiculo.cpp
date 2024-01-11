#include "vehiculo.hpp"
#include <iostream>

// Constructor de la clase vehiculo
vehiculo::vehiculo(int velocidad) {
    this->velocidad = velocidad;
}

// Función acelerar
void vehiculo::acelerar() {
    std::cout << "Acelerando el vehiculo a " << velocidad << " km/h" << std::endl;
}

// Función frenar
void vehiculo::frenar() {
    std::cout << "Frenando el vehiculo" << std::endl;
}
