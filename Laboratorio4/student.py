from person import Person


class Student(Person):
    # Constructor de la clase Student, inicializa atributos del estudiante y
    # llama al constructor de la clase base (Person)
    def __init__(self, name, age, student_id):
        super().__init__(name, age)  # Llama al constructor de la clase base
        self.student_id = student_id  # Inicializa el ID del estudiante
        self.courses = []  # Inicializa la lista de cursos del estudiante

    # Método para inscribir al estudiante en un curso
    def enroll_course(self, course):
        self.courses.append(course)  # Agrega el curso a la lista de cursos

    # Método para mostrar la información del estudiante
    def display_info(self):
        super().display_info()  # método display_info de la clase base (Person)
        print(f"Student ID: {self.student_id}Courses:\
              \n{', '.join(self.courses)}\n")  # Display ID y cursos
