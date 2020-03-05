void menu(){
	int opt = 0;
	Product almacen[TAM];
	Buy *h = NULL;
	enum boolean res = cargarProductos(almacen);
	if(res){
		do{
			printf("Selecciona un opción:\n");
			printf("1)\tMostrar elementos de la tienda.\n");
			printf("2)\tMostrar  carrito.\n");
			printf("3)\tAgregar  elemento  al  carrito.\n");
			printf("4)\tEliminar  elemento  del carrito.\n");
			printf("5)\tSalir de la aplicación.\n");
		if(scanf("%d", &opt) == 1){
			getchar();
			switch(opt){
				case 1:
					clearScreen();
					mostrarProductos(almacen);
				break;
				case 2:
					clearScreen();
					mostrarCarrito(h, almacen);
				break;
				case 3:
					clearScreen();
					mostrarProductos(almacen);
					agregarElemento(&h, almacen);
				break;
				case 4:
					clearScreen();
					mostrarCarrito(h, almacen);
					eliminarElemento(&h, almacen);
				break;
				case 5:
					clearScreen();
					return;
				break;
				default:
					clearScreen();
					printf("Ésa no es un opción válida\n");
				break;
			}
		}else{
			printf("Ésa no es un opción válida\n");
		}
		setbuf(stdin, NULL);
	}while(opt != 5);
	}else{
		printf("No hay nada que mostrar\n");
	}
}
