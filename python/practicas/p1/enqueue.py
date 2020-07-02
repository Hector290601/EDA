def enqueue(listaCola, idCola):
    if idCola < 5:
        data = input("Ingrese el valor a guardar: ")
        listaCola[idCola]=data
        idCola = idCola + 1
    else:
        print("Ya no hay espacio")
    return int(idCola)

if __name__ == '__main__':
    enqueue(listaCola, 0)
