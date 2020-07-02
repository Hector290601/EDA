def insert(lista):
    data = input("Ingrese el valor a guardar: ")
    print("Ingrese su posición desde 0 hasta ", len(lista))
    index = int(input())
    lista.insert(index, data)

