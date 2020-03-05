void eliminarElemento(Buy **t, Product almacen[TAM]){
	int id = 0, cant = 0;
	if(*t != NULL){
		printf("Ingresa el ID del producto que deseas agregar\n");
		scanf("%d", &id);
		printf("Ingresa la cantidad de elementos a agregar\n");
		scanf("%d", &cant);
		if(id <= TAM && cant <= almacen[id].stock){//es operable
			Buy *aux = *t;
			Buy *past = aux;
			while(aux != NULL && aux -> id != id){//No existe
				printf("No se ha encontrado aún\n");
				past = aux;
				aux = aux -> sig;
			}
			if(*t != NULL){//existen elementos
				aux -> number -= cant;
				almacen[id - 1].stock += cant;
			}else{//No hay elementos
				printf("No hay nada para borrar en tu carrito");
			}
			if(aux -> number == 0 && (*t) -> sig != NULL){//Hay un elemetno después de el eliminado
				past -> sig = aux -> sig;
				aux -> sig = NULL;
				free(aux);
			}else if(aux -> number == 0){//Ya no hay nada
				*t = aux -> sig;
				free(aux);
			}
		}else{
			printf("Esa no es una opcion valida\n");
		}
	}
}
