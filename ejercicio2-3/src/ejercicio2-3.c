/*
 ============================================================================
 Name        : ejercicio2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas (no más de 100),
 de cada persona debemos obtener los siguientes datos:
 número de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17),
 temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
 el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroDeCliente;
	int contadorClientes;
	char estadoCivil;
	int edad;
	int temperaturaCorporal;
	char sexo;
	int contadorViudosDe60;
	int viajeTotalSinDescuento;
	int banderaMujerSolteraMasJoven;
	int edadMujerSolteraMasJoven;
	int numeroClienteMujerSolteraMasJoven;
	int descuentoParaLosMayoresDe60;

	contadorViudosDe60 = 0;
	banderaMujerSolteraMasJoven = 0;
	contadorClientes = 0;

	for (int i = 0; i < 5; i++) {

		contadorClientes++;

		printf("ingrese numero del cliente:");
		scanf("%d", &numeroDeCliente);

		printf("ingrese estado civil de cliente[s]soltero[c]casado[v]viudo");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v') {
			printf("error. Reingrese estado civil de cliente");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}

		printf("ingrese edad de cliente");
		scanf("%d", &edad);
		while (edad < 18) {
			printf("error, no es mayor de edad");
			scanf("%d", &edad);
		}

		printf("ingrese temperatura corporal del cliente[entre 35 y 40]");
		scanf("%d", &temperaturaCorporal);
		while (temperaturaCorporal < 35 || temperaturaCorporal > 40) {
			printf("ingrese temperatura corporal del cliente[entre 35 y 40]");
			scanf("%d", &temperaturaCorporal);
		}

		printf("ingrese sexo del cliente[f]femenino[m]masculino[o]no binario");
		fflush(stdin);
		scanf("%c", &sexo);
		while (sexo != 'f' && sexo != 'm' && sexo != 'o') {
			printf("error, reingrese sexo del cliente");
			fflush(stdin);
			scanf("%c", &sexo);

		}

		if (estadoCivil == 'v' && edad > 60) {
			contadorViudosDe60++;
		}

		if (banderaMujerSolteraMasJoven == 0 && sexo == 'f' && estadoCivil == 's') {
			edadMujerSolteraMasJoven = edad;
			numeroClienteMujerSolteraMasJoven = numeroDeCliente;
			banderaMujerSolteraMasJoven = 1;
		}

		if (banderaMujerSolteraMasJoven > edad && sexo == 'f' && estadoCivil == 's') {
			numeroClienteMujerSolteraMasJoven = numeroDeCliente;
			edadMujerSolteraMasJoven = edad;
		}

		viajeTotalSinDescuento = contadorClientes * 600;

		if (contadorClientes > contadorClientes/2 && edad > 60) {
			descuentoParaLosMayoresDe60 = (viajeTotalSinDescuento * 25) / 100;
		}

	}

	printf("la cantidad de personas viudas de mas de 60 son:%d\n", contadorViudosDe60);
	printf("el numero de cliente de la mujer soltra mas Joven:%d\n", numeroClienteMujerSolteraMasJoven);
	printf("edad de la mujer soltera mas joven:%d\n", edadMujerSolteraMasJoven);
	printf("el valor del viaje total sin descuento:%d\n", viajeTotalSinDescuento);
	printf("el descuento para los de 60 años cuando son mayoria:%d",descuentoParaLosMayoresDe60);

	return EXIT_SUCCESS;
}
