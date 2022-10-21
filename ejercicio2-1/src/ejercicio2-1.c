/*
 ============================================================================
 Name        : ejercicio2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
 Ejemplo 1:  3 - 5 - 7 - 9 - 1
 Ejemplo 2:  2 - 1 - 8 - 1 - 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeros;
	int promedioNumeros;
	int contadorNumeros;
	int acumuladornumeros;

	contadorNumeros = 0;
	acumuladornumeros = 0;


	for(int i = 0; i < 5; i++){
		printf("ingrese numeros:\n");
		scanf("%d", &numeros);

		contadorNumeros++;

		acumuladornumeros += numeros;
	}

	promedioNumeros = acumuladornumeros / contadorNumeros;
	printf("el promedio de los numeros:%d\n", promedioNumeros);



	return EXIT_SUCCESS;
}
