#define TAM 6
#include "mostrarElementosDeLaTienda.h"
#include "mostrarCarrito.h"
#include "agregarElementoAlCarrito.h"
#include "eliminarElementoDelCarrito.h"


void menu(){
	int ver = 0;
	int opt = 0;
	struct product uno = {1, "UNO", 5.5, 10, 0};
	struct product dos = {2, "DOS", 10.5, 10, 0};
	struct product tres = {3, "TRES", 20.0, 10, 0};
	struct product cuatro = {4, "CUATRO", 90.5, 10, 0};
	struct product cinco = {5, "CINCO", 100.0, 10, 0};
	do{
		printf("Selecciona un opción:\n");
		printf("1)\tMostrar elementos de la tienda.\n");
		printf("2)\tMostrar  carrito.\n");
		printf("3)\tAgregar  elemento  al  carrito.\n");
		printf("4)\tEliminar  elemento  del carrito.\n");
		printf("5)\tSalir de la aplicación.\n");
		if(scanf("%d", &opt) == 1){
			getchar();
			switch(opt){
				case 1:
					clearScreen();
					mostrarElementosDeLaTienda(&uno, &dos, &tres, &cuatro, &cinco);
				break;
				case 2:
					clearScreen();
					mostrarCarrito(&uno, &dos, &tres, &cuatro, &cinco, ver);
				break;
				case 3:
					clearScreen();
					mostrarElementosDeLaTienda(&uno, &dos, &tres, &cuatro, &cinco);
					agregarElementoAlCarrito(&uno, &dos, &tres, &cuatro, &cinco);
				break;
				case 4:
					clearScreen();
					eliminarElementoDelCarrito(&uno, &dos, &tres, &cuatro, &cinco, ver);
				break;
				case 5:
					clearScreen();
					return;
				break;
				default:
					clearScreen();
					printf("Ésa no es un opción válida\n");
				break;
			}
		}else{
			printf("Ésa no es un opción válida\n");
		}
		setbuf(stdin, NULL);
	}while(opt < 5);
}
