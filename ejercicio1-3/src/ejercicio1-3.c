/*
 ============================================================================
 Name        : ejercicio1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
 Ejemplo:
 1   5   3     el 3 es del medio.
 5   1   5    no hay numero del medio.
 3   5   1     el 3 es del medio.
 3   1   5    el 3 es del medio.
 5   3   1    el 3 es del medio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("ingresar numeros:");
	scanf("%d", &numeroUno);

	printf("ingresar numeros:");
	scanf("%d", &numeroDos);

	printf("ingresar numeros:");
	scanf("%d", &numeroTres);

	if (numeroUno > numeroDos && numeroUno < numeroTres) {
		printf("el numero del medio es:\n%d", numeroUno);
	}

	if (numeroDos > numeroUno && numeroDos < numeroTres) {
		printf("el numero delmedio es:\n%d", numeroDos);
	}

	if (numeroTres > numeroDos && numeroTres < numeroDos) {
		printf("el numero de medio es:\n%d", numeroTres);
	}else{
		printf("no hay numero del medio");
	}

	return EXIT_SUCCESS;
}
