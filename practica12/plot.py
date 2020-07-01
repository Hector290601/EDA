#-*- coding:utf-8 -*-
from eCalc import *
import numpy as np
import matplotlib.pyplot as plt

def plot():
    y = []
    x =np.arange(1, 50)
    for i in x:
        _, yFor = numeroE(i)
        y.append(yFor)
    plt.title("Gráfica de complejidad del cálculo del número e")
    """plt.subplot(211)
    plt.plot(x, ((28 * y) - 28), 'b+', label="F(28x - 28)")
    plt.legend()
    plt.subplot(223)"""
    plt.plot(x, y, 'r--', label="F(x)")
    plt.legend()
    plt.text(800, 10, "Es una función exponencial")
    plt.show()
    print(x)
    print(y)

if __name__ == '__main__':
    plot()
