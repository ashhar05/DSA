with open("data.txt", "r") as f:
    print(f.tell())
    data=f.read(5)
    print(f.tell())
    f.seek(0)
    print(f.read())
