void mostrarCarrito(char *articles[TAM], int cart[TAM], float price[TAM], int ver){
	setbuf(stdin, NULL);
	int i = 0, aux = 0;
       	float tot = 0;
	while(i < TAM - 1){
		if(cart[i] > 0){
			ver = 1;
		}
		i++;
	}
	i = 0;
	if(ver == 1){
		printf("Éste es tu carrito:\n");
		printf("ID\tArtículo\tCantidad en tu carrito\tP.Unitario\tP.Total\n");
		while(i < TAM - 1){
			if(cart[i] > 0){
				printf("%d)\t%s\t\t%d\t\t\t$%g\t\t$%g\n", i + 1, articles[i], cart[i], price[i], cart[i] * price[i]);
				tot += cart[i] * price[i];
			}
			i++;
		}
		printf("Total: $%g\n", tot);
		i = 0;
	}else{
		printf("Aún no hay nada en tu carro.\n");
	}
}
