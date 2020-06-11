void mostrarCircular(Circular *h){
	if(h != NULL){
		Circular *aux = h;
		do{
			printf("%p->", aux);
			aux = aux->sig;
		}while(aux != h);
		printf("\n");
	}else{
		printf("No se puede mostrar una cola vacía\n");
	}
}
