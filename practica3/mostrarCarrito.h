void mostrarCarrito(struct product *uno, struct product *dos, struct product *tres, struct product *cuatro, struct product *cinco, int ver){
	setbuf(stdin, NULL);
    float tot = 0;
	if(uno -> cart > 0 || dos -> cart > 0 || tres -> cart > 0 || cuatro -> cart > 0 || cinco -> cart > 0){
		ver = 1;
	}
	if(ver == 1){
		printf("Éste es tu carrito:\n");
		printf("ID\tArtículo\tCantidad en tu carrito\tP.Unitario\tP.Total\n");
		if(uno -> cart > 0){
			printf("%d)\t%s\t\t%d\t\t\t$%g\t\t$%g\n", uno -> id, uno -> nombre, uno -> cart, uno -> precio, uno -> cart * uno -> precio);
			tot += uno -> cart * uno -> precio;
		}
		if(dos -> cart > 0){
			printf("%d)\t%s\t\t%d\t\t\t$%g\t\t$%g\n", dos -> id, dos -> nombre, dos -> cart, dos -> precio, dos -> cart * dos -> precio);
			tot += dos -> cart * dos -> precio;
		}
		if(tres -> cart > 0){
			printf("%d)\t%s\t\t%d\t\t\t$%g\t\t$%g\n", tres -> id, tres -> nombre, tres -> cart, tres -> precio, tres -> cart * tres -> precio);
			tot += tres -> cart * tres -> precio;
		}
		if(cuatro -> cart > 0){
			printf("%d)\t%s\t\t%d\t\t\t$%g\t\t$%g\n", cuatro -> id, cuatro -> nombre, cuatro -> cart, cuatro -> precio, cuatro -> cart * cuatro -> precio);
			tot += cuatro -> cart * cuatro -> precio;
		}
		if(cinco -> cart > 0){
			printf("%d)\t%s\t\t%d\t\t\t$%g\t\t$%g\n", cinco -> id, cinco -> nombre, cinco -> cart, cinco -> precio, cinco -> cart * cinco -> precio);
			tot += cinco -> cart * cinco -> precio;
		}
		printf("Total: $%g\n", tot);
	}else{
		printf("Aún no hay nada en tu carro.\n");
	}
}
