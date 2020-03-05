enum boolean cargarProductos(Product almacen[TAM]){
	FILE *ap;
	ap = fopen("almacen.txt", "r");
	if(ap == NULL){
		return false;
	}else{
		int i = 0;
		while(feof(ap) == 0){
			fscanf(ap, "%d", &almacen[i].id);
			fscanf(ap, "%d", &almacen[i].stock);
			fscanf(ap, "%f", &almacen[i].precio);
			fscanf(ap, "%s", almacen[i].name);
			fscanf(ap, "%s", almacen[i].description);
			i++;
			if(i == TAM){
				break;
			}
		}
		fclose(ap);
		return true;
	}
}
