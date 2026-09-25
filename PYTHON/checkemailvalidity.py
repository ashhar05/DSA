import re
email=input("enter email: ")
pattern = r"^[a-z0-9,_%+-]+@[A-Za-z0-9,-]+\.[A-Za-z]{2,}$"
if re.fullmatch(pattern, email):
    print("valid email")
else:
    print("Invalid email")
