/*
 ============================================================================
 Name        : ejercicio3-1.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumeroFlotante(float numeroFlotante);

int main(void) {
	setbuf(stdout, NULL);

	float numeroFlotante;

	printf("ingrese numero flotante");
	scanf("%f", &numeroFlotante);

	mostrarNumeroFlotante(numeroFlotante);

	return EXIT_SUCCESS;
}

void mostrarNumeroFlotante(float numeroFlotante){

	printf("el numero flotante es:%2.f\n", numeroFlotante);

}

















