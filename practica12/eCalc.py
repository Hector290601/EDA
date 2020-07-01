#-*- coding:utf-8 -*-

from decimal import Decimal, getcontext
import math
intI = 0;

def numeroE(num):
    global intI#1
    if int(num) >= 1:#3
        intI += 1#2
        getcontext().prec = int(num)#3
        floatFracc =  Decimal(1 / num)#5
        floatSum = Decimal(1 + floatFracc)#5
        floatPot = Decimal(floatSum ** num)#6
        if int(num) > 1:#2
            numeroE(num - 1)#n - 1
        return floatPot, intI#1
    else:
        return 0

if __name__ == '__main__':
    print("Cuánta exactitud deseas del número e?")
    exac = int(input(""))
    print(numeroE(exac))

