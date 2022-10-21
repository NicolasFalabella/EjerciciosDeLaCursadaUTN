/*
 ============================================================================
 Name        : ejercicio1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 ingresar 3 números y mostrar cuál de los tres es el mayor.
 Ejemplo:
 Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el segundo”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("ingrese numeros:\n");
	scanf("%d", &numeroUno);

	printf("ingrese numeros:\n");
	scanf("%d", &numeroDos);

	printf("ingrese numeros:\n");
	scanf("%d", &numeroTres);

	if(numeroDos > numeroUno && numeroDos > numeroTres ){
		printf("El mayor de los números es el segundo");
	}
	if(numeroUno > numeroDos && numeroUno > numeroTres){
		printf("El mayor de los números es el primero");
	}
	if(numeroTres > numeroUno && numeroTres > numeroDos){
		printf("El mayor de los números es el tercero");
	}

	return EXIT_SUCCESS;
}
