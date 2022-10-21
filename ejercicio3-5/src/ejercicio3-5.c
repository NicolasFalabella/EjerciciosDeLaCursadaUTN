/*
 ============================================================================
 Name        : ejercicio3-5.c
 Author      : Nicolas Falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
 int Sumar1(int, int);
 int Sumar2(void);
 void Sumar3(int, int);
 void Sumar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumaNumeros(int numeroUno, int numeroDos);
int sumaNumeros(void);
void sumaNumero(int numeroUno, int numeroDos);
void sumaNumero(void);

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int suma;

	printf("ingrese numero uno:\n");
	scanf("%d", &numeroUno);

	printf("ingrese numero dos:\n");
	scanf("%d", &numeroDos);

	suma = sumaNumeros(numeroUno, numeroDos);
	printf("la suma de los numeros es:%d\n", suma);//funcion 1

	suma = sumaNumeros();
	printf("la suma de los numeros es:%d\n", suma);//funcion 2

	sumaNumero(numeroUno, numeroDos);//funcion 3

	sumaNumero();//funcion4

	return EXIT_SUCCESS;
}
int sumaNumeros(int numeroUno, int numeroDos) {

	int suma;

	suma = numeroUno + numeroDos;

	return suma;
}

int sumaNumeros(void) {

	int numeroUno;
	int numeroDos;
	int suma;

	printf("ingrese numero uno:\n");
	scanf("%d", &numeroUno);

	printf("ingrese numero dos:\n");
	scanf("%d", &numeroDos);

	return suma;
}
void sumaNumero(int numeroUno, int numeroDos) {

	int suma;

	printf("ingrese numero uno:\n");
	scanf("%d", &numeroUno);

	printf("ingrese numero dos:\n");
	scanf("%d", &numeroDos);

	suma = numeroUno + numeroDos;

	printf("la suma de los numeros es:%d\n", suma);
}
void sumaNumero(void) {

	int numeroUno;
	int numeroDos;
	int suma;

	printf("ingrese numero uno:\n");
	scanf("%d", &numeroUno);

	printf("ingrese numero dos:\n");
	scanf("%d", &numeroDos);

	suma = numeroUno + numeroDos;

	printf("la suma de los numeros es: %d\n", suma);
}

