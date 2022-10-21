/*
 ============================================================================
 Name        : ejercicio5-2.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
  A)Cantidad de positivos y negativos.
  B)Sumatoria de los pares.
  C)El mayor de los impares.
  D)Listado de los números ingresados.
  E)Listado de los números pares.
  F)Listado de los números de las posiciones impares.
 Anexo 5-2

 G)Los números que se repiten
 H)Los positivos creciente y los negativos de manera decreciente

 Se deberán utilizar funciones y vectores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "cuentas.h"
#include "listados.h"


#define TAM_ARRAY 10
#define RANGO_MINIMO -1000
#define RANGO_MAXIMO 1000

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumero[TAM_ARRAY];
	int buffer;
	int contadorPositivos;
	int contadorNegativos;
	int acumuladorPares;
	int banderaMayorImpares;
	int mayorImpares;

	contadorNegativos = 0;
	contadorPositivos = 0;
	acumuladorPares = 0;
	banderaMayorImpares = 1;

	//ingresoDeNumeros(buffer);
	validaciones(buffer,arrayNumero);
	contadorPositivos = contadorDeLosPositivos(buffer, contadorPositivos, arrayNumero);
	contadorNegativos = contadorDeLosNegativos(buffer, contadorNegativos, arrayNumero);
	acumuladorPares = sumatoriaDeLosPares(buffer, acumuladorPares, arrayNumero);
	mayorImpares = elMayorDeLosImpares(banderaMayorImpares, mayorImpares, buffer, arrayNumero);

	listadoNumerosIngresados(arrayNumero);
	listadoDeLosNumerosPares(arrayNumero);
	listadoNumerosImpares(arrayNumero);

	return EXIT_SUCCESS;
}
