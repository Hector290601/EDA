def delete(lista):
    obj = int(input("Ingrese el elemento a eliminar"))
    if lista.count(obj) < 0:
        data = lista.remove(obj)
        return data
    else:
        print("Lista sin elementos o elemento no encontrado")
        return '', idCola

if __name__ == '__main__':
    dequeue(listaCola, 0)
