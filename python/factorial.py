def factorial(entNumero):
    i = 2
    tmp = 1
    while i < entNumero + 1:
        tmp = tmp * i
        i += 1
    return tmp


print(factorial(4))
print(factorial(5))
print(factorial(6))
