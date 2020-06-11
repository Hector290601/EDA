void menuPrincipal(){
	Circular *headCircular = NULL;
	Circular *tailCircular = NULL;
	Doble *headDoble = NULL;
	Doble *tailDoble = NULL;
	int opc = 0, idC = 0, idD = 0;
	do{
		printf("Seleccione una opción:\n");
		printf("1)\tCola circular\n");
		printf("2)\tCola doble\n");
		printf("3)\t SALIR\n");
		if(scanf("%d", &opc) == 1 && opc != 3){
			switch(opc){
				default:
				break;
				case 2:
				break;
				case 1:
					menuCircular(&headCircular, &tailCircular, &idC);
				break;
			}
		}else if(isalpha(opc)){
			printf("NO se aceptan letras\n");
			setbuf(stdin, NULL);
		}else{
			printf("Adiós\n");
		}
	}while(opc != 3);
}
