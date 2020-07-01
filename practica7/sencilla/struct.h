typedef enum{no, si} boolean;
typedef struct nodo{
	int id;
	char nombre[30];
	char numeroDeCuenta[10];
	int edad;
	struct nodo *sig;
}Nodo;
