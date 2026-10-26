#one child multiple parents
class father:
    def skills(self):
        print("gardening, programming")
class mother:
    def skills(self):
        print("cooking, art")
class child(father, mother):
    def own_skills(self):
        print("sports, music")
c = child()
c.skills()  # Output: gardening, programming
#resolved using method resolution order (MRO) to call the skills 
#method from the father class
c.own_skills()  # Output: sports, music
