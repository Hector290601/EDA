void menu(){
	int opc = 0;
	Nodo *h;
	do{
		printf("Seleccione una opción\n");
		printf("1)\tEnlistar\n");
		printf("2)\tEliminar\n");
		printf("3)\tBuscar por ID\n");
		printf("4)\tMostrar existentes\n");
		printf("5)\tSalir\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
					if(enlistar(&h)){
						printf("Enlistado\n");
					}
				break;
				case 2:
					printf("Eliminando\n");
				break;
				case 3:
					printf("Buscando\n");
				break;
				case 4:
					mostrar(h);
				break;
			}
		}else{
			printf("Esa no es una opción válida\n");
			setbuf(stdin, NULL);
		}
	}while(opc != 5);
}
