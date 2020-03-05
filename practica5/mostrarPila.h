void mostrarPila(nodoPila *t){
	int i = 0;
	clearScreen();
	if(t != NULL){
		while(t != NULL){
			printf("%d) %d: %s\n", i, t -> num, t -> nombre);
			t = t -> sig;
			i++;
		}
	}else{
		printf("No hay nada\n");
	}
}
