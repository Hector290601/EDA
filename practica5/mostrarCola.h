void mostrarCola(nodoCola *h){
	int i = 0;
	clearScreen();
	nodoCola *aux = h;
	if(aux != NULL){
		while(aux != NULL){
			printf("%d) %d: %s %p -> %p\n", i, aux -> num, aux -> nombre, aux, aux->sig);
			aux = aux -> sig;
			i++;
		}
	}else{
		printf("No hay nada\n");
	}
}
