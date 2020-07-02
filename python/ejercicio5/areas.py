import math

def circulo(entNum):
    rC = entNum**2
    area = rC * math.pi
    print(area)

def rectangulo(entBase, entAltura):
    area = entAltura * entBase
    print(area)


def triangulo(entBase, entAltura):
    baseAltura = entAltura * entBase
    area = baseAltura / 2
    print(area)

