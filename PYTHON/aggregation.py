class Teacher:
    def __init__(self, name):
        self.name = name

class Department:
    def __init__(self, name, teacher):
        self.name = name
        # The Department just references an existing Teacher
        self.teacher = teacher 

math_teacher = Teacher("Alice")
math_dept = Department("Mathematics", math_teacher)

# If 'math_dept' is deleted, 'math_teacher' still exists.
del math_dept
print(math_teacher.name)  # Still accessible
