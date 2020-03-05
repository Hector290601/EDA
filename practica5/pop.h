nodoPila *pop(nodoPila **t){
	int nd = 0, i = 0;
	clearScreen();
	if(*t != NULL){
		nodoPila *aux = *t;
		*t = aux -> sig;
		return aux;
	}else{
		printf("No se puede hacer pop en una pila vacía\n");
		return NULL;
	}
}
