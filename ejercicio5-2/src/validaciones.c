/*
 * validaciones.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Fala
 */
#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 10
#define RANGO_MINIMO -1000
#define RANGO_MAXIMO 1000

/*void ingresoDeNumeros(int buffer, int arrayNumero[]){

	int i;

	arrayNumero[i] = buffer;

	for(i = 0; i < TAM_ARRAY; i ++){
		printf("ingrese numeros");
		scanf("%d", &buffer);
	}
	while(buffer < -1000 || buffer > 1000){
		printf("error,reingrese numeros");
		scanf("%d", &buffer);
	}
}*/

void validaciones(int buffer, int arrayNumero[]) {

	int i;

	arrayNumero[i] = buffer;

	for (i = 0; i < TAM_ARRAY; i++) {
		printf("ingrese numeros: ");
		scanf("%d", &buffer);
		while (buffer < -1000 || buffer > 1000) {
			printf("ingrese numeros: ");
			scanf("%d", &buffer);
		}
	}

}
