void mostrar(Nodo *h){
	if(h != NULL){
		printf("%d\t%s\t%d\n", h -> id, h -> nombre, h -> edad);
		mostrar((*h).sig);
	}else{
		printf("No hay elementos para mostrar\n");
	}
}
