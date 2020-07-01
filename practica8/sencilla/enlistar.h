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
		}else{
			*haux = nuevo;
			(*haux) -> ant = NULL;
			nuevo -> id = 0;
			printf("Primer elemento");
		}

		nuevo -> sig = *h;
		*h = nuevo;
		printf("%p->%p\n", *h, (*h)->sig);
		return si;
	}else{
		return no;
	}
}
