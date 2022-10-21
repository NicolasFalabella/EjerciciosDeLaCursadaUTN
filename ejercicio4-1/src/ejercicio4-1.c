/*
 ============================================================================
 Name        : ejercicio4-1.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
 Utilizar la función PedirNumero de la ejercitación 3-4.

 Por ejemplo:

 5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroFactorizado(void);

int main(void) {
	setbuf(stdout, NULL);

	int acumuladorFactorizado;

	acumuladorFactorizado = 1;

	acumuladorFactorizado = numeroFactorizado();

	printf("el numero factorizado :%d\n", acumuladorFactorizado);

	return EXIT_SUCCESS;
}
int numeroFactorizado(void) {

	int numero;
	int acumuladorFactorizado;

	printf("ingrese numero para factorizar:");
	scanf("%d", &numero);

	acumuladorFactorizado = 1;

	for (int i = 1; i <= numero; i++) {

		acumuladorFactorizado *= i;

	}

	return acumuladorFactorizado;
}

