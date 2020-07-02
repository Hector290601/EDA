#-*- coding:utf-8 -*-
import locale
import os


os.system("clear")


try:
    print("read()")
    with open("read.py", "r", encoding='utf-8') as file:
        print(file.read())
    input()
    print("\nread(-111)")
    with open("read.py", "r", encoding='utf-8') as file:
        print(file.read(-111))
    input()
    print("read(10)")
    with open("read.py", "r", encoding='utf-8') as file:
        print(file.read(10))
    input()
    print("read(10) binary")
    with open("read.py", "rb") as file:
        print(file.read(10))
    input()
    print("read line by line")
    with open("read.py", "r") as file:
        while True:
            line = file.readline()
            if not line:
                break
            print(line)

except:
    print("No fué posible abrir el archivo")
