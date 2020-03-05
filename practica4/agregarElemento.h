void agregarElemento(Buy **t, Product almacen[TAM]){
	int id = 0, cant = 0;
	printf("Ingresa el ID del producto que deseas agregar\n");
	scanf("%d", &id);
	printf("Ingresa la cantidad de elementos a agregar\n");
	scanf("%d", &cant);
	if(id <= TAM && cant <= almacen[id].stock){
		Buy *aux = *t;
		while(aux != NULL && aux -> id != id){
			printf("No se ha encontrado aú\n");
			aux = aux -> sig;
		}
		if(*t != NULL){//ya existen elementos
			if(aux == NULL){//No existe el elemento
				printf("No existe el elemento\n");
				Buy *nuevo = (Buy*) malloc(sizeof(Buy));
				almacen[id - 1].stock -= cant;
				nuevo->id = id;
				nuevo->number = cant;
				nuevo->sig = *t;
				*t = nuevo;
			}else{//el elemento ya existe
				printf("El elemento ya existe\n");
				aux -> number += cant;
				almacen[id - 1].stock -= cant;
			}
		}else{//Primer elemento
			printf("Es el rpimer elmento\n");
			Buy *nuevo = (Buy*) malloc(sizeof(Buy));
			almacen[id - 1].stock -= cant;
			nuevo->id = id;
			nuevo->number = cant;
			nuevo->sig = *t;
			*t = nuevo;
		}
	}else{
		printf("Esa no es una opcion valida\n");
	}
}
