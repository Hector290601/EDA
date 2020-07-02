def push(listaPila, idPila):
    if idPila < 5:
        data = input("Ingrese el valor a guardar: ")
        listaPila[idPila]=data
        idPila = idPila + 1
    else:
        print("Ya no hay espacio")
    return int(idPila)

if __name__ == '__main__':
    push(listaTail, 0)
