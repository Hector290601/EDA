#-*- coding:utf-8 -*-

import sys

try:
    file_name = "uno.txt"
    fout = open(file_name, 'r')
    print("Abrión el archivo", file_name)
    val = fout.readline()
    print("Lee número")
    x = int(val)
    print("Convierte número a entero")
    print("Promedio: " + str(101. / x))
    fout.close()
except IOError:
    print("Error E/S")
except ValueError:
    print("No se puede convertir al entero")
except:
    print("Error inesperado: ", sys.exec.info()[0])
