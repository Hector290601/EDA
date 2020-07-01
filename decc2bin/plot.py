#-*- coding: utf-8 -*-
from dec2bin import *
import matplotlib.pyplot as plt

def plot():
    data = np.array([])
    x = range(0, 500)
    y = []
    for i in x:
        ret = dec2Bin(i)
        y = np.append(y, ret)
    plt.plot(x, y)
    plt.show()
    print(x[:])
    print(y[:])



if __name__ == '__main__':
    plot()
