def multiply(*args):
    """ function to multiply ny number of arguments together"""
    result=1
    for number in args:
        result*= number
    return result
print(multiply(2,3))
print(multiply(4,5,6,7,8,9,10))
