Nodo *buscar(Nodo *h){
	if(h != NULL){
		int id;
		printf("Ingrese el ID que desea buscar\n");
		if(scanf("%d", &id) == 1){
			while(h != NULL){
				if(h -> id != id){
					h = h -> sig;
				}else{
					return h;
				}
			}
			return NULL;
		}else{
			printf("Ingrese un ID válido");
		}
	}else{
		printf("No hay elementos para mostrar\n");
	}
}
