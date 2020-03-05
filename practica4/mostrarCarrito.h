void mostrarCarrito(Buy *h, Product almacen[TAM]){
	if(h != NULL){
		int i = 0;
		float tot = 0;
	        printf("\tLos productos del almacen son:\n");
	        printf("ID\tNombre\t[Cant]\tPrecio\tSub total\n");
		Buy *aux;
		aux = h;
		while(aux != NULL){
			printf("%d\t%s\t%d\t%g\t%g\n", aux -> id, almacen[aux -> id - 1].name, aux -> number, almacen[aux -> id -1].precio, (aux -> number * almacen[aux -> id - 1].precio));
			tot += (aux -> number * almacen[aux -> id - 1].precio);
			aux = aux -> sig;
		}
		printf("Total: %g\n", tot);
	}else{
		printf("Aún no hay nada en tu carrito\n");
	}
}
