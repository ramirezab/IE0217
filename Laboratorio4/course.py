class Course:
    # Constructor de la clase Course, inicializa atributos del curso
    def __init__(self, course_code, course_name):
        self.course_code = course_code  # Inicializa el código del curso
        self.course_name = course_name  # Inicializa el nombre del curso

    # Método para mostrar la información del curso
    def display_info(self):
        print(f"Course code: {self.course_code}\
              \nCourse name: {self.course_name}\n")
