# Definición de la clase Person

class Person:
    # Constructor de la clase, inicializa los atributos name y age
    def __init__(self, name, age):
        self.name = name  # Guardamos el nombre de la persona
        self.age = age    # Guardamos la edad de la persona

    # Método para mostrar la información de la persona
    def display_info(self):
        # Mostramos en pantalla el nombre y la edad de la persona
        print(f"Name: {self.name}\nAge: {self.age}\n")
