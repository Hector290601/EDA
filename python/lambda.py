#-*- coding:utf-8 -*-

pi = 3.14159

area_circulo = lambda entRadio:pi*(entRadio**2)
radio = 8

print("El área del círculo es: ", area_circulo(radio))

print("El área del círculo es: ",
        (lambda entRadio:pi*(entRadio**2))(radio))
