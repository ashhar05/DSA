import re
pan =input("enter pan number")
pattern = r"^[A-Z]{5}[0-9]{4}[A-Z]$"
if re.fullmatch(pattern, pan):
    print("valid pan")
else:
    print("invalid pan")
