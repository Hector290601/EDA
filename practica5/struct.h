#define MAX 5

enum booleano {no, si};

typedef struct nodoPila{
	int num;
	char nombre[30];
	struct nodoPila*sig;
}nodoPila;

typedef struct nodoCola{
	int num;
	char nombre[30];
	struct nodoCola *sig;
}nodoCola;

int numPila = 0;
int numCola = 0;
