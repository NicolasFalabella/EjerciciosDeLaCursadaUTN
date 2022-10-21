/*
 ============================================================================
 Name        : ejercicio18-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 18-1:
 Crear una función que reciba como parámetros un array con 5 nombres (que estarán previamente hardcodearlos).
 La función deberá guardar la lista de nombres en un archivo de texto.
 int EscribirNombresTXT(char* nombres, char* path);
 Otra función se encargará de la lectura de dicha lista.
 int LeerNombresTXT(char* nombres, char* path);



 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

	char nombres [][5] ;


}eNombreEstructura;

int main(void) {
	setbuf(stdout, NULL);






	return EXIT_SUCCESS;
}

int EscribirNombresTXT(char* nombres, char* path){

	return 0;
}

int LeerNombresTXT(char* nombres, char* path){

	return 0;
}
