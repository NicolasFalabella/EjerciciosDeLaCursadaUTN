/*
 ============================================================================
 Name        : ejercicio3-2.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y 0 en caso contrario.
 Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroPar(void);

int main(void) {
	setbuf(stdout, NULL);

	int numeros;

	numeros = numeroPar();

	printf("el numero es:%d\n", numeros);

	return EXIT_SUCCESS;
}
int numeroPar(void) {

	int numeros;
	int retorno;

	printf("ingrese numeros");
	scanf("%d", &numeros);

	if (numeros % 2 == 0) {
		retorno = 0;
	}else{
		retorno = 1;
	}

	return retorno;
}

