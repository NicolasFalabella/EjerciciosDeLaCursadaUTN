/*
 ============================================================================
 Name        : ejercicio3-4.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int retornoNumero(void);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	numero = retornoNumero();

	printf("el numero es:%d\n", numero);

	return EXIT_SUCCESS;
}
int retornoNumero(void) {

	int numero;

	printf("ingrese numero entre 2 y 8:");
	scanf("%d", &numero);
	while(numero < 2 || numero > 8){
		printf("error este numero esta fuera del rango indicado");
		scanf("%d", &numero);
	}

	return numero;
}

