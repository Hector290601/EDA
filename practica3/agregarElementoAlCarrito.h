void agregarElementoAlCarrito(struct product *uno, struct product *dos, struct product *tres, struct product *cuatro, struct product *cinco){
	int seleccionado = 0, cantidad = 0;
	printf("Seleccione ID del emento que desea agregar.\n");
	if(scanf("%d", &seleccionado) == 1 && seleccionado > 0 && seleccionado < TAM){
		printf("¿Cuántos desea agregar?\n");
		if(scanf("%d", &cantidad) == 1){
			switch(seleccionado){
				case 1:
					if(cantidad <= uno -> stock){
						uno -> stock -= cantidad;
						uno -> cart += cantidad;
					}
				break;
				case 2:
					if(cantidad <= dos -> stock){
						dos -> stock -= cantidad;
						dos -> cart += cantidad;
					}
				break;
				case 3:
					if(cantidad <= tres -> stock){
						tres -> stock -= cantidad;
						tres -> cart += cantidad;
					}
				break;
				case 4:
					if(cantidad <= cuatro -> stock){
						cuatro -> stock -= cantidad;
						cuatro -> cart += cantidad;
					}
				break;
				case 5:
					if(cantidad <= cinco -> stock){
						cinco -> stock -= cantidad;
						cinco -> cart += cantidad;
					}
				break;
			}
		}else{
			printf("Esa no es una opción válida.\n");
		}
	}else if(seleccionado > TAM){
		printf("Ese artículo no existe.\n");
	}else{
		printf("Esa no es una opción.\n");
	}
}
