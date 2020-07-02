def mostrarCola(listaCola, idCola):
    print("Mostrando cola")
    i = 0
    while i < idCola:
        if listaCola[i] != '':
            print(i, ") ", listaCola[i])
            if idCola == i:
                break
        i += 1
