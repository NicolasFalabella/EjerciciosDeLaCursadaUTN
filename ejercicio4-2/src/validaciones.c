/*
 * validaciones.c
 *
 *  Created on: 30 sep. 2022
 *      Author: Fala
 */

#include <stdio.h>
#include <stdlib.h>

char validaciones(char temperatura) {

	while (temperatura != 'c' && temperatura != 'f') {
		printf("error, reingrese temperatura [c]celsius [f]fahrenhei:\n");
		fflush(stdin);
		scanf("%c", &temperatura);
	}

	return temperatura;
}
int rangoDeTemperaturaCelsius(int gradosCelsius) {


	while (gradosCelsius < 0 || gradosCelsius > 100) {
		printf("error, reingrese grados de temperatura celsius entre 0 y 100:\n");
		scanf("%d", &gradosCelsius);

	}

	return gradosCelsius;
}
int rangoDeTemperaturaFahrenheit(int gradosFahrenheit) {

	while (gradosFahrenheit < 32 || gradosFahrenheit > 212) {
		printf(
				"error, reingrese grados de temperatura fahrenheit entre 0 y 100:\n");
		scanf("%d", &gradosFahrenheit);
	}

	return gradosFahrenheit;
}
int calculoCelsiusAFahrenheit(int gradosCelsius) {

	int calculoCelsiusAFaherenheit;

	calculoCelsiusAFaherenheit = (gradosCelsius * 1.8) + 32;

	return calculoCelsiusAFaherenheit;
}
int calculoFahrenheitACelsius(int gradosFahrenheit) {

	int calculoFaherenheitACelsius;

	calculoFaherenheitACelsius = (gradosFahrenheit - 32) * 0.5556;

	return calculoFaherenheitACelsius;
}
