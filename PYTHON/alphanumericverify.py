import re

string = input("Enter a string: ")

pattern = r"^[A-Za-z0-9]+$"

if re.fullmatch(pattern, string):
    print("Valid: string contains only alphanumeric characters")
else:
    print("Invalid: string contains non-alphanumeric characters")
