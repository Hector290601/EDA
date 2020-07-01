boolean eliminar(Nodo **h){
	Nodo *objetivo = NULL;
	objetivo = buscar((*h));
	if( objetivo != NULL){
		Nodo *aux = *h;
		while(aux -> id != objetivo -> id){
			aux = aux -> sig;
		}
		free(aux);
		return si;
	}else{
		return no;
	}
}
