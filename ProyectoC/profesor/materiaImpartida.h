int materia(){
	int opc;
	do{
		printf("Seleccione su materia:\n");
		printf("1)Español\n");
		printf("2)Matemáticas\n");
		printf("3)Inglés\n");
		printf("4)Computación\n");
		printf("5)Física\n");
		if(scanf("%d", &opc) == 1 && opc <=5 && opc >=1){
			return opc;
		}else if(opc <1 || opc >5){
			printf("Esa no es una opción válida");
		}
	}while(opc <1 || opc >5);
}