import menuPila
import menuCola
import menuLista
def menu():
    while True:
        print("Selecciona una opción")
        print("1)Pila")
        print("2)Cola")
        print("3)Lista")
        print("4)salir")
        opc = int(input())
        if opc == 4:
            break
        else:
            if opc == 1:
               menuPila.menuPila()
            elif opc == 2:
                menuCola.menuCola()
            elif opc == 3:
                menuLista.menuLista()


if __name__ == '__main__':
    menu()
