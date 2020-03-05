void eliminarElementoDelCarrito(struct product *uno, struct product *dos, struct product *tres, struct product *cuatro, struct product *cinco, int ver){
	mostrarCarrito(uno, dos, tres, cuatro, cinco, ver);
	int seleccionado = 0, cantidad = 0;
	if(uno -> cart > 0 || dos -> cart > 0 || tres -> cart > 0 || cuatro -> cart > 0 || cinco -> cart > 0){
		printf("Seleccione ID del emento que desea eliminar.\n");
		if(scanf("%d", &seleccionado) == 1 && seleccionado > 0 && seleccionado < TAM){
			printf("¿Cuántos desea eliminar?\n");
			if(scanf("%d", &cantidad) == 1){
				switch(seleccionado){
					case 1:
						if(cantidad <= uno -> cart){
							uno -> cart -= cantidad;
							uno -> stock += cantidad;
						}
					break;
					case 2:
						if(cantidad <= dos -> cart){
							dos -> cart -= cantidad;
							dos -> stock += cantidad;
						}
					break;
					case 3:
						if(cantidad <= tres -> cart){
							tres -> cart -= cantidad;
							tres -> stock += cantidad;
						}
					break;
					case 4:
						if(cantidad <= cuatro -> cart){
							cuatro -> cart -= cantidad;
							cuatro -> stock += cantidad;
						}
					break;
					case 5:
						if(cantidad <= cinco -> cart){
							cinco -> cart -= cantidad;
							cinco -> stock += cantidad;
						}
					break;
					default:
						printf("No existe tal artículo en tu carrito");
					break;
				}
			}
		}else if(seleccionado > TAM){
			printf("Ese artículo no existe en el carrito.\n");
		}else{
			printf("Esa no es una opción.\n");
		}
	}
}
