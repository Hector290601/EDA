import enqueue
import dequeue
import mostrarCola
listaCola = ['', '', '', '', '']
idCola = 0
def menuCola():
    global listaCola
    global idCola
    while True:
        print("Seleccione una opción:\n")
        print("1)Enqueue")
        print("2)Dequeue")
        print("3)Salir")
        opc = int(input())
        if opc == 3:
            break
        else:
            if opc == 1:
                idCola = int(enqueue.enqueue(listaCola, idCola))
            elif opc == 2:
                data, idCola = dequeue.dequeue(listaCola, idCola)
            mostrarCola.mostrarCola(listaCola, idCola)


if __name__ == '__main__':
    menuCola
