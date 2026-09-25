lines=["lines 1\n", "Lines2\n", "lines 3\n"]
with open("data.txt", "w") as f:
    f.write("Hello Students\n")
    f.write("Welcome to Python File Handling\n")
    f.writelines(lines)
