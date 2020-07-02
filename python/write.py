#-*- coding:utf-8 -*-

numbres = ['Hola', 'mundo']
print("write()")

try:
    with open("file.txt", "w") as file:
        print(file.write("Hola mundo"))
        print(file.writelines(numbres))
    
    with open("file.txt", "r") as file:
        print(file.readlines())

except:
    print("No fué posible abrir el archivo")


