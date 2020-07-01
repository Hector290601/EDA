void mostrar(Nodo *h, Nodo *aux){
	if(h != NULL){
		printf("%p <- %p -> %p\n", h->ant, h, h->sig);
		//printf("ID\tNOMBRE\tEDAD\n");
		//printf("%d\t%s\t%d\n", aux -> id, aux -> nombre, aux -> edad);
		while(h != aux){
			h = h -> sig;
			//printf("%d\t%s\t%d\n", aux -> id, aux -> nombre, aux -> edad);
			printf("%p <- %p -> %p\n", h -> ant, h, h-> sig);
		}
	}else{
		printf("No hay elementos para mostrar\n");
	}
}
