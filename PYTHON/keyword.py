def student(name, age, course, city):
    print("--- Student Details ---")
    print(f"Name   : {name}")
    print(f"Age    : {age}")
    print(f"Course : {course}")
    print(f"City   : {city}")

# Calling the function using keyword arguments in a different order
student(city="Bengaluru", name="Aarav", course="Computer Science", age=20)
