def pop(listaPila, idPila):
    if idPila > 0 or idPila == 1:
        data = listaPila[idPila - 1]
        listaPila[idPila - 1]=''
        idPila = idPila - 1
        return data, idPila
    else:
        print("No se pued eeliminar en una pila sin elementos")
        return '', idPila

if __name__ == '__main__':
    pop(listaTail, 0)
