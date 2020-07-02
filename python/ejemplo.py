# -*- coding: utf-8 -*- 

print ("Hola, como te llamas?") 
nombre = input(' ') 
print ("Buen día " + nombre) 


running = True 
while running: 
    valor_1 = 0 
    valor_2 = 0 
    print ("---Calculadora---") 
    print ("1- Sumar") 
    print ("2- Multiplicar") 
    print ("3- Salir") 
    op = int(input('Opcion: ')) 
    if op == 1: 
        print ("---Sumar---") 
        valor_1 = int(input('')) 
        print (" + ") 
        valor_2 = int(input('')) 
        suma = valor_1 + valor_2 
        print ("El resultado es: %d" % suma) 
    elif op == 2: 
        print ("---Multiplicar---") 
        valor_1 = float(input('')) 
        print (" x ") 
        valor_2 = float(input('')) 
        multiplicacion = valor_1 * valor_2 
        print ("El resultado es: %d" % multiplicacion) 
    elif op == 3: 
        running = False 
