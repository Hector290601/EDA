#-*- coding:utf-8 -*-

import areas

def menu():
    opc = 1
    while opc != 5:
        print("Seleccione una opción:")
        print("1) Circulo")
        print("2) Rectángulo")
        print("3) Triángulo")
        print("4) Todos")
        print("5) Salir")
        opc = int(input())
        if opc == 1:
            areas.circulo(20)
        elif opc == 2:
            areas.rectangulo(10, 20)
        elif opc == 3:
            areas.triangulo(30, 40)
        elif opc == 4:
            areas.circulo(20)
            areas.rectangulo(10, 20)
            areas.triangulo(30, 40)
        elif opc == 5:
            break

menu()
