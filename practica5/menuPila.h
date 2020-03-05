void menuPila(){
	int opc = 0;
	nodoPila *t = NULL;
	do{
		printf("Selecciona una de las opciones:\n");
		printf("1) Push\n");
		printf("2) Pop\n");
		printf("3) Mostrar pila\n");
		printf("4) Salir al menú principal\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
					push(&t);
					mostrarPila(t);
				break;
				case 2:
					pop(&t);
					mostrarPila(t);
				break;
				case 3:
					mostrarPila(t);
				break;
			}
		}else{
			printf("Ésa no es una opción válida\n");
			setbuf(stdin, NULL);
		}
	}while(opc != 4);
}
