/*
 ============================================================================
 Name        : ejercicio5-1.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 ============================================================================
 Armar un Menú de Opciones con las siguientes opciones
 1-Inicializar
 2-Cargar
 3-Mostrar
 4-Calcular Promedio
 5-Ordenar
 Al ingresar a cada opción del menú deberá imprimir en pantalla el nombre del mismo.
 Ej: Si se presiona la opción 1 mostrar por pantalla “Ud. ha seleccionado lo opción 1-Inicializar”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumeros[5];
	int acumuladorArrayNumeros;

	acumuladorArrayNumeros = 0;

	for(int i = 0; i < 5; i++){
		printf("ingrese numeros:\n");
		scanf("%d", &arrayNumeros[i]);

		acumuladorArrayNumeros += arrayNumeros[i];
	}
	printf("la sumatoria de numeros es : %d \n", acumuladorArrayNumeros);

	return EXIT_SUCCESS;
}
