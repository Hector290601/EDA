# -*- coding: utf-8 -*-
"""
Created on Wed May  6 09:58:17 2020

@author: hrmha
"""
#import matplotlib.pyplot as plt
#import numpy as np

def dec2bin(dec):
    while dec > 0:
        print(dec%2)
        dec = dec // 2
    return dec


def dec2binGraf(dec):
    y = {}
    i = 0
    while dec > 0:
        i += 1
        dec = dec // 2
        y.append(i)
    return y

dec2bin(10)
print(dec2binGraf(10))