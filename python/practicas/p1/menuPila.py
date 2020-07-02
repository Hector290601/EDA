import push
import pop
import mostrarPila
listaPila = ['', '', '', '', '']
idPila = 0
def menuPila():
    global listaPila
    global idPila
    while True:
        print("Seleccione una opción:\n")
        print("1)Push")
        print("2)Pop")
        print("3)Salir")
        opc = int(input())
        if opc == 3:
            break
        else:
            if opc == 1:
                idPila = int(push.push(listaPila, idPila))
            elif opc == 2:
                data, idPila = pop.pop(listaPila, idPila)
            mostrarPila.mostrarPila(listaPila, idPila)

if __name__ == '__main__':
    menuPila
