void menu(){
	int opc = 0;
	do{
		clearScreen();
		printf("Selecciona una de las opciones:\n");
		printf("1) Ir a Pila\n");
		printf("2) Ir a Cola\n");
		printf("3) Salir\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
					menuPila();
				break;
				case 2:
					menuCola();
				break;
			}
		}else{
			printf("Ésa no es una opción válida\n");
			setbuf(stdin, NULL);
		}
	}while(opc != 3);
		
}
