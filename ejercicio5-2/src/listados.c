/*
 * listados.c
 *
 *  Created on: 19 oct. 2022
 *      Author: Fala
 */
#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 10

void listadoNumerosIngresados(int arrayNumero[]) {

	for (int i = 0; i < TAM_ARRAY; i++) {
		printf("numero %d %d \n", i + 1, arrayNumero[i]);
	}
}

void listadoDeLosNumerosPares(int arrayNumero[]){

	int contadorAuxiliar;

	for(int i; i < TAM_ARRAY; i++){
		if(arrayNumero[i] %2 == 0){
			contadorAuxiliar++;
		printf("numero %d %d \n", i+1, arrayNumero[i]);
		}
	}
}

void listadoNumerosImpares(int arrayNumero[]){

	int contadorAuxiliar;

	for(int i; i < TAM_ARRAY; i++ ){
		if(arrayNumero[i] %1 == 0){
			contadorAuxiliar++;
			printf("numero %d %d \n", i+1, arrayNumero[i]);
		}

	}
}

void listadoNumPosicionImpar(int arrayNumero[]){
	for (int i = 0; i < TAM_ARRAY; i++) {
			if (arrayNumero[i] % 2 != 0) {
				printf("posicion %d : %d\n", i, arrayNumero[i]);
			}
		}
}





