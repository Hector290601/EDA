void menuCola(){
	int opc = 0;
	nodoCola *t = NULL;
	nodoCola *h = NULL;
	do{
		printf("Selecciona una de las opciones:\n");
		printf("1) Enqueue\n");
		printf("2) Dequeue\n");
		printf("3) Mostrar Cola\n");
		printf("4) Salir al menú principal\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
					enqueue(&t, &h);
					mostrarCola(h);
				break;
				case 2:
					dequeue(&t, &h);
					mostrarCola(h);
				break;
				case 3:
					mostrarCola(h);
				break;
			}
		}else{
			printf("Ésa no es una opción válida\n");
			setbuf(stdin, NULL);
		}
	}while(opc != 4);
}
