#-*- coding:utf-8 -*-

intI = 0
iteraciones = 0

def merge(left, right):
    global iteraciones
    iteraciones = 0
    iteraciones += 1
    if not len(left) or not len(right):
        return left or right
    result = []
    i, j = 0, 0
    while (len(result) < len(left) + len(right)):
        if left[i] < right[j]:
            result.append(left[i])
            i+= 1
        else:
            result.append(right[j])
            j+= 1
        if i == len(left) or j == len(right):
            result.extend(left[i:] or right[j:])
            break
    return result

def mergesort(lista):
    global intI, iteraciones
    intI += 1
    if len(lista) < 2:
        return lista
    middle = len(lista)//2
    left= mergesort(lista[:middle])
    intI = intI * iteraciones
    right = mergesort(lista[middle:])
    return merge(left, right)

def retns(lista):
    global intI
    mrg = mergesort(lista)
    cont = intI
    intI = 0
    return mrg, cont

if __name__ == "__main__":
    lst = [3,4,5,1,2,8,3,7,6,4, 4,4,5,7,23,8,9,43,2,3,4,5,6,8,9,9,5,3,10,11,1,4,1,5,6,2,2,4,5,67,87,7,32,4,3,32]
    mrg = mergesort(lst)
    print("PROMEDIO:")
    print("INPUT: ", lst)
    print("OUTPUT: ", mrg)
    print("INGRESSOS A LA FUNCIÓN: ", intI)
    intI = 0
    mrgOrd = mergesort(mrg)
    print("MEJOR CASO:")
    print("INPUT: ", mrg)
    print("OUTPUT: ", mrgOrd)
    print("INGRESSOS A LA FUNCIÓN: ", intI)
    intI = 0
    lstRvd = list(reversed(mrg))
    mrgOrd = mergesort(lstRvd)
    print("PEOR CASO:")
    print("INPUT: ", lstRvd)
    print("OUTPUT: ", mrgOrd)
    print("INGRESSOS A LA FUNCIÓN: ", intI)
