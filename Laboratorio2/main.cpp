#include "motocoche.hpp"

int main(){
    MotoCoche miMotoCoche(60, 2, true);

    miMotoCoche.coche::acelerar();
    miMotoCoche.abrirPuertas();
    miMotoCoche.usarCasco();
};