Nodo *eliminar(Nodo *h){
	if(h != NULL){
		int id;
		printf("Ingrese el ID que desea eliminar\n");
		if(scanf("%d", &id) == 1){
			if(h != NULL){
				Nodo *aux = h;
				do{
					if(h -> id == id){
						((h) -> ant) -> sig = (h) -> sig;
						((h) -> sig) -> ant = (h) -> ant;
						(h) -> ant = NULL;
						(h) -> sig = NULL;
						Nodo *tmp = h;
						return tmp;
					}
					h = h -> sig;
				}while(h != aux);
			}else{
				printf("No hay elementos para mostrar\n");
			}
			return NULL;
		}else{
			printf("Ingrese un ID válido\n");
		}
	}else{
		printf("No hay elementos para mostrar\n");
	}
}
