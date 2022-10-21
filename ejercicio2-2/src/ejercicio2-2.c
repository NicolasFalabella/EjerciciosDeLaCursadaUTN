/*
 ============================================================================
 Name        : ejercicio2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar 10 números enteros, distintos de cero.

 Mostrar:

 1. Cantidad de pares e impares.
 2. El menor número ingresado.
 3. De los pares el mayor número ingresado.
 4. Suma de los positivos.
 5. Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeros;
	int contadorNumerosPares;
	int contadorNumerosImpares;
	int menorNumeroIngresado;
	int banderaMenorIngresado;
	int banderaMayorPares;
	int mayorParesIngresado;
	int acumuladorPositivos;
	int acumuladorProductoNegativos;

	contadorNumerosPares = 0;
	contadorNumerosImpares = 0;
	banderaMenorIngresado = 0;
	banderaMayorPares = 0;
	acumuladorPositivos = 0;
	acumuladorProductoNegativos = 1;

	for(int i = 0; i < 10; i++){
		printf("ingresarNumeros:\n");
		scanf("%d", &numeros);

		if(numeros %2 == 0){
			contadorNumerosPares++;
		}else{
			contadorNumerosImpares++;
		}

		if(banderaMenorIngresado == 0){
			menorNumeroIngresado = numeros;
			banderaMenorIngresado = 1;
		}else{
			if(menorNumeroIngresado > numeros){
				menorNumeroIngresado = numeros;
			}
		}

		if(banderaMayorPares == 0 && numeros %2 == 0){
			mayorParesIngresado = numeros;
			banderaMayorPares = 1;
		}
		if(mayorParesIngresado < numeros){
			mayorParesIngresado = numeros;
		}

		if(numeros > 0){
			acumuladorPositivos += numeros;
		}

		if(numeros < 0){
			acumuladorProductoNegativos *= numeros;
		}



	}

	printf("la cantiad de pares: %d\n", contadorNumerosPares);
	printf("la cantidad de impares: %d\n", contadorNumerosImpares);
	printf("el menor numero ingresado: %d\n", menorNumeroIngresado);
	printf("el mayor numero par ingresado: %d\n", mayorParesIngresado);
	printf("la suma de los positivos: %d\n", acumuladorPositivos);
	printf("el producto de los negativos: %d\n", acumuladorProductoNegativos);





	return EXIT_SUCCESS;
}
