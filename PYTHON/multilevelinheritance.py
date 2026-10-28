#parent to child to granchild
class animal:
    def eat(self):
        print("eating")
class dog(animal):#level 1
    def bark(self):
        print("barking")
class puppy(dog):#level 2
    def weep(self):
        print("weeping")
p = puppy()
p.eat()  # Output: eating
p.bark()  # Output: barking
p.weep()  # Output: weeping 