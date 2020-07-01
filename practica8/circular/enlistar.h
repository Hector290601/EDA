boolean enlistar(Nodo **h, Nodo **haux){
	Nodo *nuevo = (Nodo*) malloc(sizeof(Nodo));
	if(nuevo != NULL){
		//printf("Inghrese el Nombre:\n");
		//scanf("%s", nuevo -> nombre);
		//printf("Ingrese su número de cuenta\n");
		//scanf("%s", nuevo -> numeroDeCuenta);
		//printf("Ingrese su edad\n");
		//scanf("%d", & (nuevo -> edad));
		nuevo -> ant = NULL;
		if((*h) != NULL){
			nuevo -> id = ((*h) -> id) + 1;
			printf("Ya hay elementos existentes\n");
			(*h) -> ant = nuevo;
			nuevo -> sig = *h;
			nuevo -> ant = *haux;
			(*haux) -> sig = nuevo;
		}else{
			*haux = nuevo;
			nuevo -> sig = nuevo;
			nuevo -> ant = nuevo;
			nuevo -> id = 0;
			printf("Primer elemento\n");
		}
		*h = nuevo;
		printf("%p <- %p->%p\n", (*h)->ant, *h, (*h)->sig);
		return si;
	}else{
		return no;
	}
}
