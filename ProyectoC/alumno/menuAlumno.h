void menuAlumno(Alumno **headAlumno){
	int opc, id;
	do{
		printf("Selecciona una opción:\n1)Modificar datos\n2)Ver calificaciones\n3)Nuevo alumno\n4)Ver alumno\n5)Salir\n");
		printf("idGpo: %d", &idGpo);
		if(scanf("%d", &opc) == 1 && idAlumno > 0 && idGpo > 0){
			switch(opc){
				case 1:
					printf("Ingrese su ID:\n");
               	                        scanf("%d", &id);
                       	                if(id <=idAlumno){
                               	                modificarAlumno(&(*headAlumno), id);
                                       	}else{
                                               	printf("ID incorrecto\n");
                                        }
				break;
				case 2:
				break;
				case 3:
					nuevoAlumno(&(*headAlumno));
				break;
				case 4:
					printf("Ingrese su ID:\n");
					scanf("%d", &id);
					if(id <=idAlumno && idAlumno > 0){
							mostrarAlumno(*headAlumno, id);
					}else{
						printf("ID incorrecto\n");
					}
				break;
				default:
				break;
			}
		}else if(opc == 3 && idGpo > 0){
			nuevoAlumno(&(*headAlumno));
		}else if(idGpo == 0){
			printf("Aún no hay maestros ni grupos disponibles");
		}else{
			setbuf(stdin, NULL);
		}
	}while(opc != 5);
}
