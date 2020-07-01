void mostrarAlumno(Alumno *h, int id){
	if(idAlumno > 0){
		while((h->id) != id){
			h = h->sig;
			if(h -> id == id){
				break;
			}
		}
		printf("Id:%d\nNombre completo: %s %s %s\nAño: %d\n", h->id, h->apellidoPaterno, h->apellidoMaterno, h->nombre, h -> anio);
	}else{
		printf("No hay alumnos registrados\n");
	}
}