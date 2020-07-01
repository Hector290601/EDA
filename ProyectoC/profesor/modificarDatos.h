void modificarProfesor(Profesor **h, int id){
	Profesor *aux = *h;
	while(aux -> id != id){
		aux = aux->sig;
		if(aux->id = id){
			break;
		}
	}
	if(aux != NULL){
		int opc;
		do{
			printf("Seleccione una opción\n");
			printf("1) Nombre\n");
			printf("2) Apellido paterno\n");
			printf("3) Apellido materno\n");
			printf("4) Salir\n");
			if(scanf("%d", &opc) == 1){
				switch(opc){
					case 1:
						printf("Nombre:\n");
						scanf("%s", &(aux -> nombre));
					break;
					case 2:
						printf("Apellido paterno\n");
						scanf("%s", &(aux -> apellidoPaterno));
					break;
					case 3:
						printf("Apellido materno\n");
						scanf("%s", &(aux -> apellidoMaterno));
					break;
				}
			}else{
				setbuf(stdin, NULL);
			}
		}while(opc != 4);
	}else{
		printf("Algo ha ocurrido mal\n");
	}
}