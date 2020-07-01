#-*- coding:utf-8 -*-

def factorial(intN):
    intI = 1
    i = 1
    fact = 1
    while i <= intN:
        fact = fact * i
        i = i + 1
        intI += 1
    return fact, intI


if __name__ == '__main__':
    print(factorial(int(input("Ingrese el número para calcular su factorial "))))
