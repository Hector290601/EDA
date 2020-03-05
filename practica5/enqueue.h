enum booleano enqueue(nodoCola **t, nodoCola **h){
	fflush(stdin);
	char nombre[30];
	clearScreen();
	printf("Dame un nombre a guardar\n");
	fflush(stdin);
	scanf("%s", nombre);
	if(numCola == MAX){
		return no;
	}else{
		nodoCola *nuevo = (nodoCola*) malloc(sizeof(nodoCola));
		if(*t == NULL){
			*h = nuevo;
			*t = nuevo;
		}else{
			(*t)->sig = nuevo;
		}
		nuevo -> num = numCola;
		strcpy(nuevo -> nombre, nombre);
		fflush(stdin);
		numCola ++;
		*t = nuevo;
		return si;
	}
}
