nodoCola *dequeue(nodoCola **t, nodoCola **h){
	fflush(stdin);
	clearScreen();
	if(*t != NULL){
		nodoCola *aux = *h;
		if(*h == NULL){
			printf("es lo ultimo\n");
			*h = NULL;
			*t = NULL;
			numCola = 0;
		}else{
			*h = (*h)->sig;
		}
		aux -> sig = NULL;
		return aux;
	}else{
		printf("no puedes hacer dequeue en una cola vacía\n");
		return NULL;
	}
}
