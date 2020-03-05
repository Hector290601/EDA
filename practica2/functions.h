#define TAM 6
#include "mostrarElementosDeLaTienda.h"
#include "mostrarCarrito.h"
#include "agregarElementoAlCarrito.h"
#include "eliminarElementoDelCarrito.h"


void menu(){
	char *articles[TAM]={"UNO", "DOS", "TRES", "CUATRO", "CINCO", '\0'};
	int stock[TAM]={10, 10, 10, 10, 10, '\0'};
	int cart[TAM]={0, 0, 0, 0, 0, '\0'};
	float price[TAM]={5.5, 10.5, 20.0, 90.5, 100.0, '\0'};
	int ver = 0;
	int opt = 0;
	do{
	        setbuf(stdin, NULL);
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
					mostrarElementosDeLaTienda(articles, stock, price);
				break;
				case 2:
					clearScreen();
					mostrarCarrito(articles, cart, price, ver);
				break;
				case 3:
					clearScreen();
					mostrarElementosDeLaTienda(articles, stock, price);
					agregarElementoAlCarrito(stock, cart);
				break;
				case 4:
					clearScreen();
					mostrarCarrito(articles, cart, price, ver);
					eliminarElementoDelCarrito(stock, cart, ver);
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
	}while(opt < 5);
}
