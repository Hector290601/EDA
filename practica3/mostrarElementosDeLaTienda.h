void mostrarElementosDeLaTienda(struct product *uno, struct product *dos, struct product *tres, struct product *cuatro, struct product *cinco){
 	int i = 0;
	printf("ID\tArtículo\tCantidad en stock\tPrecio unitario\n");
	printf("%d)\t%s\t\t%d\t\t\t$%g\n", uno->id, uno->nombre, uno->stock, uno->precio);
	printf("%d)\t%s\t\t%d\t\t\t$%g\n", dos->id, dos->nombre, dos->stock, dos->precio);
	printf("%d)\t%s\t\t%d\t\t\t$%g\n", tres->id, tres->nombre, tres->stock, tres->precio);
	printf("%d)\t%s\t\t%d\t\t\t$%g\n", cuatro->id, cuatro->nombre, cuatro->stock, cuatro->precio);
	printf("%d)\t%s\t\t%d\t\t\t$%g\n", cinco->id, cinco->nombre, cinco->stock, cinco->precio);
	printf("Presione enter para continuar");
	getchar();
}
