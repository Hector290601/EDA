#define TAM 5
enum boolean{false, true};

typedef struct productos{
	int id;
	char name[10];
	char description[50];
	float precio;
	int stock;
}Product;

typedef struct compra{
	int id;
	int number;
	struct compra *sig;
}Buy;
