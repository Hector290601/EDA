enum booleano push(nodoPila **t){
	int num;
	char name[30];
	clearScreen();
	if(numCola == MAX){
		printf("Pila llena\n");
		return no;
	}else{
		printf("Ingrese el nombre del alumno\n");
		scanf("%s", name);
		nodoPila *nuevo = (nodoPila*) malloc(sizeof(nodoPila));
		numCola ++;
		nuevo -> num = numCola;
		strcpy(nuevo -> nombre, name);
		if(t == NULL){//primer elemento
			nuevo -> sig = NULL;
		}else{
			nuevo -> sig = *t;
		}
		*t = nuevo;
		return si;
	}
}
