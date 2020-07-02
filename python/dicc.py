#-*- coding:utf-8 -*-
inventario = {}
def actualizar(c, a, m):
    inventario[c][a]=m

def main():
    inventario['refresco']={'precio':'$15', 'cantidad':'100'}
    inventario['papas']={'precio':'$5', 'cantidad':'30'}
    inventario['leche']={'precio':'$10', 'cantidad':'25'}
    inventario['frijol']={'precio':'$12', 'cantidad':'50'}
    inventario['dulces']={'precio':'$2', 'cantidad':'45'}
    print("Invectario actual:\n")
    for i in inventario:
        print(i, inventario[i])
    r = "refresco"
    p = "precio"
    c = "cantidad"
    d = "dulces"
    precior = "16"
    cantidadd = "39"
    actualizar(r, p, precior)
    actualizar(d, c, cantidadd)
    print("Invectario nuevo:\n")
    for i in inventario:
        print(i, inventario[i])

main()

