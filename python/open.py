#-*- coding:utf-8 -*-
import locale
file = None
try:
    file = open("open.py", "r", encoding='utf-8')
    print(locale.getpreferredencoding())
    print(locale.setlocale(locale.LC_ALL, ''))
except:
    print("No fué posible abrir el archivo")

finally:
    if file:
        file.close
