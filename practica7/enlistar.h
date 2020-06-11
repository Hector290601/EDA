boolean enlistar(Nodo **h){
	Nodo *nuevo = (Nodo*) malloc(sizeof(Nodo));
	if(nuevo != NULL){
		Nodo *aux = *h;
		printf("Inghrese el Nombre:\n");
		scanf("%s", &(nuevo -> nombre));
		printf("Ingrese su número de cuenta\n");
		scanf("%s", &(nuevo -> numeroDeCuenta));
		printf("Ingrese su edad\n");
		scanf("%d", & (nuevo -> edad));
		if(*h != NULL){
			nuevo -> id = ((*h) -> id) + 1;
		}else{
			nuevo -> id = 0;
		}
		nuevo -> sig = *h;
		*h = nuevo;
	}else{
		return no;
	}
}
