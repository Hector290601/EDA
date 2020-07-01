void mostrarProfesor(Profesor *h, int id){
	if(idProfesor > 0){
		while((h->id) != id){
			h = h->sig;
		}
		printf("Id:%d\nNombre completo: %s %s %s\nMateria: %d\n", h->id, h->apellidoPaterno, h->apellidoMaterno, h->nombre, h -> materia);
	}else{
		printf("No hay pñrofesores registrados\n");
	}
}
