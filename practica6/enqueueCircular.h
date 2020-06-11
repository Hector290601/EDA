Bool enqueueCircular(Circular **h, Circular **t, int *id){
	if(*id <= MAX){
		Circular *nuevo = (Circular*) malloc(sizeof(Circular));
		if(nuevo != NULL){
			if(*t == NULL){
				*h = nuevo;
			}else{
				(*t)->sig = nuevo;
				nuevo->sig = NULL;
			}
			*t = nuevo;
			printf("ID: %d", *id);
			*id += 1;
			return si;
		}else{
			printf("No hay memoria disponible\n");
			return no;
		}
	}else{
		printf("Cola llena\n");
		return no;
	}
}
