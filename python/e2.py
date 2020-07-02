import math
def areas(realRadio, realBase, realAltura, realBaseTriangulo, realAlturaTriangulo):
    areaCirculo = math.pi * math.pow(realRadio, 2)
    areaRectangulo = realBase * realAltura
    areaTriangulo = (realBaseTriangulo * realAlturaTriangulo) / 2
    return areaCirculo, areaRectangulo, areaTriangulo


print(areas(1, 2, 3, 4, 5))
