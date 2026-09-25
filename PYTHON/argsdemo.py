def multiply_all(*args):
    """function to multiply any number of arguments together"""
    result=1
    for number in args:
        result *= number
    return result
print(multiply_all(2,3))
print(multiply_all(4, 5, 6))
print(multiply_all())
print(multiply_all(10))
