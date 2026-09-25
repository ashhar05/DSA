def multiplier(n):
    def multiply(x):
        return x*n
    return multiply
times3= multiplier(3)
print(times3(7))
