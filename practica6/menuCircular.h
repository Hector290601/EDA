void menuCircular(Circular **h, Circular **t, int *id){
	int opc = 0;
	do{
		printf("Seleccione una opción:\n");
		printf("1)\tEnqueue\n");
		printf("2)\tDequeue\n");
		printf("3)\tMostrar elementos\n");
		printf("4)\tSALIR\n");
		if(scanf("%d", &opc) == 1 && opc != 4){
			switch(opc){
				default:
					printf("Opción no válida\n");
				break;
				case 1:
					enqueueCircular(&(*h), &(*t), id);
				break;
				case 2:
				break;
				case 3:
					mostrarCircular(h);
				break;
			}
		}else if(isalpha(opc)){
			printf("NO se admiten letras\n");
			setbuf(stdin, NULL);
		}
	}while(opc != 4);
}
