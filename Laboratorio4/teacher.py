from person import Person


class Teacher(Person):
    # Constructor de la clase Teacher, inicializa atributos del profesor
    # y llama al constructor de la clase base (Person)
    def __init__(self, name, age, employee_id):
        super().__init__(name, age)  # Llama al constructor de la clase base
        self.employee_id = employee_id  # Inicializa el ID del profesor
        self.courses_taught = []  # lista de cursos que el profesor enseña

    # Método para asignar un curso al profesor
    def assign_course(self, course):
        self.courses_taught.append(course)  # Agrega el curso a la lista

    # Método para mostrar la información del profesor
    def display_info(self):
        super().display_info()  # método display_info de la clase (Person)
        # Muestra el ID y cursos enseñados por el profesor
        print(f"Employee ID: {self.employee_id}\
               \nCourses taught: {', '.join(self.courses_taught)}\n")
