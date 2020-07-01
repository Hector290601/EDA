#-*- coding:UTF-8 -*-
import numpy as np
def dec2Bin(intNum):
    num = np.array([])#2
    intCont = 0#2
    while(intNum != 0): #n
        intCont += 1 # 4
        modArray = np.array([intNum%2]) #4
        num = np.append(num, modArray)#4
        intNum = intNum // 2 #4
    num = np.flip(num)#3
    return intCont#1


if __name__ == '__main__':
    print(dec2Bin(int(input("Ingrese el número que desea convertir: "))))
