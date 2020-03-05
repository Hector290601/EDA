void mostrarElementosDeLaTienda(char *articles[TAM], int stock[TAM], float price[TAM]){
	int i = 0;
	printf("ID\tArtículo\tCantidad en stock\tPrecio unitario\n");
	while(i < TAM - 1){
		printf("%d)\t%s\t\t%d\t\t\t$%g\n", i + 1, articles[i], stock[i], price[i]);
		i ++;
	}
	printf("Presione enter para continuar");
	getchar();
}
