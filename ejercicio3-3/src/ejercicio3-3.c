/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que pida el ingreso de un entero y lo retorne.
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

	printf("ingrese numero:");
	scanf("%d", &numero);

	return numero;
}

