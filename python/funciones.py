def imprimeNombre(cadNombre):
    print(cadNombre)
    return cadNombre[0], cadNombre[-1]


def quienEs(cadNombre):
    print(cadNombre + " mejor conocido como el Zorro.\n")


def segundaCoincidencia(cadUno, cadDos):
    frist = cadUno.find(cadDos)
    return cadUno.find(cadDos, frist + 1)
