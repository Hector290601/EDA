typedef struct alumno{
	int id;
	char nombre[50];
	char apellidoPaterno[50];
	char apellidoMaterno[50];
	int anio;
	float calificaciones[6];
	struct alumno *sig;
}Alumno;

int idAlumno = 0;

typedef struct profesor{
	int id;
	char nombre[50];
	char apellidoPaterno[50];
	char apellidoMaterno[50];
	int materia;
	char horario[5];
	int grupos[6];
	struct profesor *sig;
}Profesor;

int idProfesor = 0;

typedef struct grupo{
	int id;
	int numeroDeAlumnos;
	int maestro;
	struct grupo *sig;
}Grupo;

int idGpo = 0;
int maxGpo = 0;