void crearGrupo(Grupo ** h, Grupo **t, int idProfesor){
	printf("iteración %d\n", idProfesor);
	srand(time(NULL));
	Grupo *nuevo = (Grupo *) malloc(sizeof(Grupo));
	if(*h == *t){
		*h = nuevo;
		*t = nuevo;
	}else{
		(*t) -> sig = nuevo;
	}
	nuevo -> id = idGpo;
	idGpo ++;
	nuevo -> numeroDeAlumnos = rand()  % 11 + 40;
	nuevo -> maestro = idProfesor;
}