def mostrarPila(listaPila, idPila):
    while idPila > 0 or idPila == 1:
        if listaPila[idPila - 1] != '':
            print(idPila, ") ", listaPila[idPila - 1])
            idPila -= 1
        else:
            break
