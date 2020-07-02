import insert
import delete
import mostrarLista
lista = []
def menuLista():
    global listaPila
    while True:
        print("Seleccione una opción:\n")
        print("1)Insert")
        print("2)Delete")
        print("3)Salir")
        opc = int(input())
        if opc == 3:
            break
        else:
            if opc == 1:
                insert.insert(lista)
            elif opc == 2:
                datoBorrado= (lista)
            mostrarLista.mostrarLista(lista)

if __name__ == '__main__':
    menuLista
