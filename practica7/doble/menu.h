void menu(){
	int opc = 0;
	Nodo *h = NULL;
	Nodo *nodo;
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
					if(eliminar(&h)){
						printf("Eliminando\n");
					}
				break;
				case 3:
					printf("Buscando\n");
					nodo = buscar(h);
					if(nodo != NULL){
						mostrar(nodo);
					}else{
						printf("No hay elementos con ese ID");
					}
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
