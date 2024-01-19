#include "Agenda.hpp"

// Método para agregar un nuevo contacto a la agenda
template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& Contacto) {
    // Verificar existencia de contacto
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++) {
        // Verificar si el número de teléfono ya está en la agenda
        if (it->getTelefono() == contactos.getTelefono()) {
            // Lanzar una excepción si el contacto ya existe
            throw std::invalid_argument("Ya existe un contacto con este numero");
        }    
    }
    // Se agrega el nuevo contacto a la lista
    contactos.push_back(contactos);
}

// Método para eliminar un contacto de la agenda por número de teléfono
template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono) {
    // Verificar existencia de contacto
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++) {
        // Verificar si el número de teléfono coincide con el contacto actual
        if (it->getTelefono() == telefono) {
            // Eliminar el contacto de la lista
            contactos.erase(it);
            return;
        }    
    }
    // Lanzar una excepción si no se encuentra un contacto con ese número
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

// Método para mostrar todos los contactos en la agenda
template <typename T>
void Agenda<T>::mostrarContactos() const {
    // Verificar existencia de contacto
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++) {
        // Imprimir nombre, teléfono y correo electrónico de cada contacto
        std::cout << "Nombre" << it->getNombre() << " "
                  << "Telefono" << it->getTelefono() << " "
                  << "Email" << it->getEmail() << std::endl;
    }
}

// Método para buscar contactos por nombre o correo electrónico que coincidan con un patrón
template <typename T>
std::list<Contacto<T>> Agenda<T>::buscarcontactos(const std::string& patron) const {
    // Lista para almacenar los contactos que coinciden con el patrón
    std::list<Contacto<T>> resultados;

    // Variables para almacenar la posición de coincidencia en el nombre o correo electrónico
    std::string::size_type pos;
    
    // Iterar a través de la lista de contactos
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++) {
        // Buscar coincidencia en el nombre
        pos = it->getNombre().find(patron);
        if (pos != std::string::npos) {
            // Agregar el contacto a la lista de resultados
            resultados.push_back(*it);
        } else {
            // Buscar coincidencia en el correo electrónico
            pos = it->getEmail().find(patron);
            if (pos != std::string::npos) {
                // Agregar el contacto a la lista de resultados
                resultados.push_back(*it);
            }
        }
    }
    // Devolver la lista de contactos que coinciden con el patrón
}
