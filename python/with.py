#-*- coding:utf-8 -*-
import locale

try:
    with open("with.py", "r", encoding='utf-8') as file:
        print(locale.getpreferredencoding())
        #LANG enviroment variable
        print(locale.setlocale(locale.LC_ALL, ''))
except:
    print('No es posible abrir el archivo')
