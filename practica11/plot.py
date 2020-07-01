#-*- coding:utf-8 -*-

import matplotlib.pyplot as plt
import numpy as np
from piCalc import *

def graficar():
    x = np.arange(1, 10)
    y = []
    for i in x:
        _, ret = piCalc(i)
        y.append(ret)
    plt.title("Complejidad del algoritmo de Chudnovsky")
    plt.plot(x, y, 'r--', label="F(x)")
    plt.legend()
    plt.text(100, 9, "Es un algoritmo de complejidad lineal")
    plt.savefig("practica11.png")
    plt.show()
    print(x)
    print(y)



if __name__ == '__main__':
    graficar()
