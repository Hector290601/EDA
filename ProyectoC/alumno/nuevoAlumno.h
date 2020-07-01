void nuevoAlumno(Alumno **h){
	Alumno* nuevo = (Alumno*) malloc(sizeof(Alumno));
	if(nuevo != NULL){
		printf("Estás crando un nuevo alumno\n");
		if(*h == NULL){
			*h = nuevo;
		}else{
			(*h)-> sig = nuevo;
		}
		nuevo->id = idAlumno;
		idAlumno ++;
		printf("Nombre:\n");
		scanf("%s", &(nuevo->nombre));
		printf("Apellido Paterno:\n");
		scanf("%s", &(nuevo -> apellidoPaterno));
		printf("Apellido Materno:\n");
		scanf("%s", &(nuevo -> apellidoMaterno));
		printf("Semestre:\n");
		scanf("%d", &(nuevo -> anio));
		printf("Datos de alumno crado:\n");
		mostrarAlumno(nuevo, (nuevo->id));
	}
}
