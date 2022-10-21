/*
 * cuentas.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Fala
 */
#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 10

/*int contadorDeLosPositivos(int buffer, int contadorPositivos, int arrayNumero[]) {

	for (int i = 0; i < TAM_ARRAY; i++) {
		arrayNumero[i] = buffer;
		if (buffer > -1) {
			contadorPositivos++;
		}
	}
	return contadorPositivos;
}*/
int contadorDeLosPositivos(int buffer, int contadorPositivos, int arrayNumero[]) {

	int i;

	for (i = 0; i < TAM_ARRAY; i++) {

		arrayNumero[i] = buffer;

		if (buffer > -1) {
			contadorPositivos++;
		}
	}
	return contadorPositivos;
}

int contadorDeLosNegativos(int buffer, int contadorNegativos, int arrayNumero[]) {

	for (int i = 0; i < TAM_ARRAY; i++) {
		arrayNumero[i] = buffer;
		if (buffer < -1) {
			contadorNegativos++;
		}
	}

	return contadorNegativos;
}

int sumatoriaDeLosPares(int buffer, int acumuladorPares, int arrayNumero[]) {

	for (int i = 0; i < TAM_ARRAY; i++) {
		if (buffer % 2 == 0) {
			acumuladorPares += buffer;
		}
	}
	return acumuladorPares;
}

/*int elMayorDeLosImpares(int buffer, int banderaMayorImpares,int mayorImpares, int arrayNumero[]){

	int i;

	arrayNumero[i] = buffer;

	for(i = 0; i < TAM_ARRAY; i++){
		if(banderaMayorImpares == 1){
			mayorImpares = buffer;
			banderaMayorImpares = 0;
		}else{
			if(mayorImpares < buffer){
				mayorImpares = buffer;
			}
		}

	}


	return mayorImpares;
}*/

int elMayorDeLosImpares(int banderaMayorImpares, int mayorImpares, int buffer,
		int arrayNumero[]) {

	int i;

	arrayNumero[i] = buffer;

	for (i = 0; i < TAM_ARRAY; i++) {
		if (buffer % 2 != 0) {
			if (banderaMayorImpares == 0) {
				mayorImpares = buffer;
				banderaMayorImpares = 1;
			} else {
				if (mayorImpares < buffer) {
					mayorImpares = buffer;
				}
			}
		}
	}

	return mayorImpares;
}























