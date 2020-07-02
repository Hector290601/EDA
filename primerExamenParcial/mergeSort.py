# -*- coding: utf-8 -*-
"""
Created on Thu Apr 23 13:13:46 2020

@author: Héctor Robles

"""
import random

im = 0
sc = 0
pc = 0
mrg = 0
def mergeSort(numLista):#Crea una variable 1 se ejecuta (n*2)-1
    global im, sc, pc
    im += 1
    if len(numLista) < 2:#3*(n*2)
        pc += 1
        return numLista#2*(n*2)
    else:
        sc+= 1
        mitad = len(numLista)//2 #6*(n-1)
        derecha =  mergeSort(numLista[:mitad]) #n+2+1+2 *(n-1)
        izquierda = mergeSort(numLista[mitad:]) #n-n/2*(n-1)
        return merge(derecha, izquierda) #3*(n-1)


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


if __name__ == '__main__':
    #lista = listaAleatorios(1000000)
    lista = [7, 0, 23, 67, 123 , 47, 89, 123, 54, 789, 234, 65]
    mergeSortResult = mergeSort(lista)
    print(mergeSortResult)

