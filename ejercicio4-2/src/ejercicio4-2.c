/*
 ============================================================================
 Name        : ejercicio4-2.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit , validando que las
 temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
 Las validaciones se hacen en una biblioteca.
 Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.


 el punto d ebullicion en celsius es de 100ºC grados y el punto de congelacion es 0ºC
 el punto de congelacion de farenheit es de 32ºF y el punto de ebullicion es de 212ºF
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"

int main(void) {
	setbuf(stdout, NULL);

	char temperatura;
	int gradosCelsius;
	int gradosFahrenheit;
	int pasajeCelsiusAFarenheit;
	int pasajeFahrenheitACelsius;

	printf("ingrese temperatura [c]celsius [f]fahrenheit:\n");
	fflush(stdin);
	scanf("%c", &temperatura);
	temperatura = validaciones(temperatura);

	if (temperatura == 'c') {
		printf("ingrese grados de temperatura celsius entre 0 y 100:\n");
		scanf("%d", &gradosCelsius);
		gradosCelsius = rangoDeTemperaturaCelsius(gradosCelsius);
		pasajeCelsiusAFarenheit = calculoCelsiusAFahrenheit(gradosCelsius);
		printf("el calculo de la temperatura celsius a fahrenheit:%d\n",pasajeCelsiusAFarenheit);
	} else {
		printf("ingrese grados de temperatura fahrenheit entre 32 y 212:\n");
		scanf("%d", &gradosFahrenheit);
		gradosFahrenheit = rangoDeTemperaturaFahrenheit(gradosFahrenheit);
		pasajeFahrenheitACelsius = calculoFahrenheitACelsius(gradosFahrenheit);
		printf("el calculo de la temperatura fahrenheita celsius:%d\n",pasajeFahrenheitACelsius);
	}

	return EXIT_SUCCESS;
}
