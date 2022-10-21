/*
 ============================================================================
 Name        : ejercicio2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int contadorLetrasP;
	char letras;

	contadorLetrasP = 0;

	for(int i = 0; i < 5; i++){
		printf("ingrese letras\n");
		fflush(stdin);
		scanf("%c", &letras);

		if(letras == 'p'){
			contadorLetrasP++;
		}

	}
	printf("las p minusculas ingresadas son: %d\n", contadorLetrasP);


	return EXIT_SUCCESS;
}
