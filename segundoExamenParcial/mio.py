# -*- coding: utf-8 -*-
"""
Created on Thu Apr 23 13:13:46 2020

@author: Héctor Robles

"""
import random

mrg = 0

def mergeSort(numLista):#Crea una variable 1 se ejecuta (n*2)-1
    if len(numLista) < 2:#3*(n*2)
        return numLista#2*(n*2)
    else:
        mitad = len(numLista)//2 #6*(n-1)
        derecha =  mergeSort(numLista[:mitad]) #n+2+1+2 *(n-1)
        izquierda = mergeSort(numLista[mitad:]) #n-n/2*(n-1)
        return merge(derecha, izquierda)#3*(n-1)


def merge(lista1, lista2):#n-1
    global mrg
    mrg += 1 
    i, j = 0, 0#4
    result = [] #2
    while(i < len(lista1) and j < len(lista2)): #n-1
        if (lista1[i] < lista2[j]):#5
            result.append(lista1[i])#3
            i += 1#2
        else:
            result.append(lista2[j])#3
            j += 1#1
    result += lista1[i:]#4n
    result += lista2[j:]#4n
    return result#2

def listaAleatorios(n):
    lista = [0]  * n
    for i in range(n):
        lista[i] = random.randint(0, 1000)
    return lista

def retns(lista):
    global mrg
    m = mergeSort(lista)
    r = mrg
    mrg = 0
    return r

if __name__ == '__main__':
    for i in range(1000, 1010):
        lista = listaAleatorios(i)
        mg, rt = retns(lista)
        print("entrada: ", lista, "Promedio: ", retns(lista))
        print("entrada: ", mg, "Mejor: ", retns(mg))
        print("entrada: ", list(reversed(mg)), "Peor: ", retns(list(reversed(mg))))

