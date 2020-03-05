void mostrarProductos(Product almacen[TAM]){
	int i = 0;
	printf("\tLos productos del almacen son:\n");
	printf("ID\tNombre\t[Cant]\tPrecio\n");
	while(i < TAM){
		printf("%d\t%s\t[%d]\t%g\n", almacen[i].id, almacen[i].name, almacen[i].stock, almacen[i].precio);
		i++;
	}
}
