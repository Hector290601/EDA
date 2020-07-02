#-*- coding:utf-8 -*-
"""
if condición:
    bloque de código
else:
    bloque de código
"""
def obtenMayor(entParam1, entParam2):
    if entParam < entParam2:
        return entParam2
    else:
        return entParam1

def masGrande(entA, entB, entC):
    if entA > entB:
        if entA > entC:
            return entA
        else:
            return entC
    else:
        if entB > entC:
            return entB
        else:
            return entC

