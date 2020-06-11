void mostrar(Nodo *h){
	if(h != NULL){
		printf("ID\tNOMBRE\tEDAD\tNÚMERO DE CTA.\n");
		while(h != NULL){
			printf("%d\n", (*h).id);
			if(h -> sig != NULL){
				h = h -> sig;
			}else{
				break;
			}
		}
	}else{
		printf("No hay elementos para mostrar\n");
	}
}
