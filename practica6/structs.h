#define MAX 2
typedef enum bol{no, si} Bool;

typedef struct circular{
	int id;
	char fecha[8];
	struct circular *sig;
}Circular;

typedef struct doble{
	int id;
	char fecha[8];
	struct dible *ant;
	struct doble *sig;
}Doble;
