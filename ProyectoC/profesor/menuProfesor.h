void menuProfesor(Profesor **head){
	int opc, id;
	do{
		printf("Seleccione una opción:\n1)Modificar datos\n2)Registrar calificaciones\n3)Nuevo profesor\n4)Ver datos de profesor\n5)Salir\n");
		printf("id: %d\n", idProfesor);
		if(scanf("%d", &opc) == 1 && idProfesor > 0){
			switch(opc){
				case 1:
					printf("Ingrese su ID:\n");
               	                        scanf("%d", &id);
                       	                if(id <=idAlumno){
						modificarProfesor(&(*head), id);
                                       	}else{
                                               	printf("ID incorrecto\n");
                                        }
				break;
				case 2:
				break;
				case 3:
					nuevoProfesor(&(*head));
				break;
				case 4:
					printf("Ingrese su ID:\n");
               	                        scanf("%d", &id);
                       	                if(id <=idAlumno){
                               	                mostrarProfesor(*head, id);
                                       	}else{
                                               	printf("ID incorrecto\n");
                                        }
				break;
				default:
				break;
			}
		}else if(opc == 3){
			nuevoProfesor(&(*head));
		}else{
			setbuf(stdin, NULL);
		}
	}while(opc != 5);
}