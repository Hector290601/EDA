def dequeue(listaCola, idCola):
    if idCola > 0 or idCola == 1:
        data = listaCola[idCola - 1]
        listaCola[idCola - 1]=''
        idCola= idCola - 1
        return data, idCola
    else:
        print("No se puede eliminar en una cola sin elementos")
        return '', idCola

if __name__ == '__main__':
    dequeue(listaCola, 0)
