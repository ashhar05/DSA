def concatenate(**kwargs):
    result = ""
    for arg in kwargs.values():
        result += arg
    return result
print(concatenate(a="Real", b="Python", c="Is", d="Great", e="!"))
