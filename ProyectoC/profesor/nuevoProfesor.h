void nuevoProfesor(Profesor **h){
	Profesor *nuevo = (Profesor*) malloc(sizeof(Profesor));
	if(nuevo != NULL){
		if(*h == NULL){
			*h = nuevo;
		}else{
			(*h)-> sig = nuevo;
		}
		printf("Estás crando un nuevo alumno\n");
		nuevo->id = idAlumno;
		idProfesor ++;
		maxGpo++;
		printf("Nombre:\n");
		scanf("%s", &(nuevo->nombre));
		printf("Apellido Paterno:\n");
		scanf("%s", &(nuevo -> apellidoPaterno));
		printf("Apellido Materno:\n");
		scanf("%s", &(nuevo -> apellidoMaterno));
		printf("Mateira:\n");
		nuevo -> materia = materia();
		printf("Datos de profesor crado:\n");
		mostrarProfesor(nuevo, (nuevo->id));
	}
}