#include "coche.hpp"

coche::coche(int velocidad, int numPuertas) : vehiculo(velocidad), numPuertas(numPuertas){}

void coche::abrirPuertas(){
    /*Codigo para activar sensores que abren puertas*/
    cout << "Abriendo las " << numPuertas << "Puertas del coche" << std::endl;

}