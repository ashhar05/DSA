class Engine:
    def __init__(self, horsepower):
        self.horsepower = horsepower

class Car:
    def __init__(self, model, hp):
        self.model = model
        # The Engine is created inside the Car
        self.engine = Engine(hp) 

# When 'my_car' is deleted, its 'engine' is also deleted.
my_car = Car("Sedan", 200)
