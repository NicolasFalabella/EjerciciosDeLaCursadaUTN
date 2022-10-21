/*
 ============================================================================
 Name        : ejercicio1-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 Ejemplo:
 Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int suma;

	printf("ingrese numero uno:\n");
	scanf("%d", &numeroUno);
	printf("ingrese numero dos:\n");
	scanf("%d", &numeroDos);

	suma = numeroUno + numeroDos;

	printf("la suma del numero 1 y l numero 2 es = %d", suma);

	return EXIT_SUCCESS;
}
