class employee:
    def __init__(self, name, salary):
        self.name = name
        self.__salary = salary # private attribute

    #getter method for salary
    def get_salary(self):
        return self.__salary
    
    #setter method for salary
    def set_salary(self, new_salary):
        if new_salary >= 0:
            self.__salary = new_salary
        else:
            print("Salary cannot be negative.")

e = employee("John", 50000)
# Accessing salary using getter method
print(e.get_salary())  # Output: 50000
# Modifying salary using setter method
e.set_salary(60000)
print(e.get_salary())  # Output: 60000
e.set_salary(-1000)  # Output: Salary cannot be negative.