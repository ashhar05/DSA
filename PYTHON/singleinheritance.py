class vehicle:
    def __init__(self, brand):
        self.brand = brand


class car(vehicle):
    def __init__(self, brand, model):
        super().__init__(brand)#caling the constructor of the parent class
        self.model = model

    def display_info(self):
        print(f"Brand: {self.brand}, Model: {self.model}")
    
c =car("Toyota", "Camry")
c.display_info()  # Output: Brand: Toyota, Model: Camry