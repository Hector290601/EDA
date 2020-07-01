void mostrar(Nodo *h, Nodo *aux){
	if(h != NULL){
		//printf("%p -> %p", h, aux);
		//printf("ID\tNOMBRE\tEDAD\n");
		//printf("%d\t%s\t%d\n", aux -> id, aux -> nombre, aux -> edad);
		//aux = aux -> sig;
		while(h != NULL){
			//printf("%d\t%s\t%d\n", aux -> id, aux -> nombre, aux -> edad);
			printf("%p <- %p -> %p\n", h -> ant, h, h-> sig);
			h = h -> sig;
		}
	}else{
		printf("No hay elementos para mostrar\n");
	}
}
