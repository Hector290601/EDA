#-*- coding:utf-8 -*-

#import math
import numpy as np
from decimal import Decimal, getcontext
from factorial import *

def piCalc(intGrupo):
    getcontext().prec = int(12 *intGrupo)
    listAcumPi = Decimal(0.0)#2
    intI = 0
    for k in range(0, intGrupo, 1):#n
        intI += 1
        intP1 = Decimal(((-1) ** k))#5
        intP2, intFact = factorial(6 * k)#6 * n
        intI = intI + intFact
        intP3 = Decimal((13591409 + (545140134 * k)))#6
        intP4,  intFact= factorial(3 * k)#6
        factP5, intFact = factorial(k)#6
        intP5 = factP5 ** 3
        floatP6 = Decimal((640320) ** Decimal(((3 * k) + (3 / 2))))#9
        intNumerador = Decimal(intP1 * intP2 * intP3)#8
        floatDenominador = Decimal(intP4 * intP5 * floatP6)#8
        floatSum = Decimal(intNumerador / floatDenominador)#6
        float12Sum = 12 * floatSum#4
        listAcumPi += float12Sum#4
    pi = Decimal(1/listAcumPi)#5
    return pi, intI#1



if __name__ == '__main__':
    intGrupo = int(input("Ingrese el número de múltiplos de 14 decimales a calcular: "))
    print(piCalc(intGrupo))
