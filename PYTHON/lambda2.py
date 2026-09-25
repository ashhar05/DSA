people= [("alice", 30), ("bob", 25), ("charlie", 35), ("diana", 28)]

ascending= sorted(people, key=lambda person: person[1])
descending= sorted(people, key=lambda person: person[1], reverse= T)
print("ascending order", acsending)
print("descending order", descending)
