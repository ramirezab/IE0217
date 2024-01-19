#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>
#include "Contacto.hpp"

template <typename T>
class Agenda{
    public:
        void agregarContacto(const Contacto<T>& contacto);
        void eliminarContacto(const T& telefono);
        void mostrarContactos() const;
        std::list<Contacto<T>> buscarcontactos(const std::string& patron) const;

    private:
        std::list<Contacto<T> > contactos;

};

#endif // AGENDA_HPP