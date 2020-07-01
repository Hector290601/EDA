#-*- coding: utf-8 -*-

from mergeSort import *
import random
import matplotlib.pyplot as plt
import numpy as np

def listaAleatorios(n):
    lista = [0]  * n
    for i in range(n):
        lista[i] = random.randint(0, 100)
    return lista

def plot():
    y = []
    sortord = []
    sortrev = []
    lst2 = []
    x = range(0, 101)
    for i in x:
        lst, yFor = retns(listaAleatorios(i))#caso promedio, devuelve una lista ordenada y un contador
        y.append(yFor)
        lst, sortOrdIt = retns(lst)#mejor caso, devuelve la misma lista de entrada y un contador
        sortord.append(sortOrdIt)
        lst, sortRevIt = retns(list(reversed(lst)))
        sortrev.append(sortRevIt)
    plt.title("casoPromedio")
    plt.plot(x, y, 'r^', label="Caso promedio")
    plt.plot(x, y, 'g--', label ="Mejor caso")
    plt.plot(x, sortrev, 'b--', label="Peor caso")
    plt.legend()
    plt.savefig("segundoExamenParcial.png")
    plt.show()


if __name__ == '__main__':
    plot()

