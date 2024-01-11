#include "moto.hpp"

Moto::Moto(int velocidad, bool tieneCasco): vehiculo(velocidad), tieneCasco(tieneCasco){}

void Moto::usarCasco(){

    if (tieneCasco){
        cout << "Usando casco mientras conduizco la moto" << std::endl;

    } else{
        cout << "Alerta!!! No tengo casco" << std::endl;
    };
}