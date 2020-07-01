Nodo *eliminar(Nodo *a){
	if(a != NULL){
		Nodo *h = a;
		int id;
		printf("Ingrese el ID que desea eliminar\n");
		if(scanf("%d", &id) == 1){
			while(h != NULL){
				if((h) -> id != id){
					h = (h) -> sig;
				}else{
					((h) -> ant) -> sig = (h) -> sig;
					((h) -> sig) -> ant = (h) -> ant;
					(h) -> sig = NULL;
					(h) -> ant = NULL;
					return h;
				}
			}
		}else{
			printf("Ingrese un ID válido");
		}
	}else{
		printf("No hay elementos para mostrar\n");
	}
	return NULL;
}
