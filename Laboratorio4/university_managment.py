from student import Student
from teacher import Teacher
from course import Course

# Creación de instancias de estudiantes, profesores y cursos
student1 = Student("Bryan", 29, "B35581")
student2 = Student("Otro", 22, "B31234")

teacher1 = Teacher("Profesor1", 50, "123456")
teacher2 = Teacher("Profesor2", 60, "654321")

course1 = Course("IE0217", "DSA")
course2 = Course("IE1234", "EIE")

# Inscripción de estudiantes en cursos y asignación de cursos a profesores
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)

teacher1.assign_course(course1.course_code)
teacher2.assign_course(course2.course_code)

# Mostrar información de estudiantes, profesores y cursos
student1.display_info()
teacher1.display_info()
course1.display_info()
