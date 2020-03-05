int eliminarElementoDelCarrito(int ver){
	int seleccionado = 0, cantidad = 0;
	if(ver == 1){
		printf("Seleccione ID del emento que desea eliminar.\n");
		if(scanf("%d", &seleccionado) == 1 && seleccionado > 0 && seleccionado < TAM){
			printf("¿Cuántos desea eliminar?\n");
			if(scanf("%d", &cantidad) == 1 && cantidad <= cart[seleccionado - 1]){
				cart[seleccionado - 1] -= cantidad;
				stock[seleccionado - 1] += cantidad;
			}else if(cantidad > cart[seleccionado]){
				printf("No tiene tantos elementos en el carrito.\n");
			}else{
				printf("Esa no es una opción válida.\n");
			}
		}else if(seleccionado > TAM){
			printf("Ese artículo no existe en el carrito.\n");
		}else{
			printf("Esa no es una opción.\n");
		}
	}
}
