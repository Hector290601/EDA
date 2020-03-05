void agregarElementoAlCarrito(int stock[TAM], int cart[TAM]){
	int seleccionado = 0, cantidad = 0;
	printf("Seleccione ID del emento que desea agregar.\n");
	if(scanf("%d", &seleccionado) == 1 && seleccionado > 0 && seleccionado < TAM){
		printf("¿Cuántos desea agregar?\n");
		if(scanf("%d", &cantidad) == 1 && cantidad <= stock[seleccionado - 1]){
			*(cart + seleccionado - 1) += cantidad;
			*(stock + seleccionado - 1) -= cantidad;
		}else if(cantidad > *(stock + seleccionado - 1)){
			printf("No hay tanta disponibilidad en stock.\n");
		}else{
			printf("Esa no es una opción válida.\n");
		}
	}else if(seleccionado > TAM){
		printf("Ese artículo no existe.\n");
	}else{
		printf("Esa no es una opción.\n");
	}
}
