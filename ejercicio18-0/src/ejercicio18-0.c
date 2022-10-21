/*
 ============================================================================
 Name        : ejercicio18-0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	FILE *pArchivo;
	char arrayNombreApellido[] = "gaston-messi";
	int cantidadDeLetrasDelTexto;
	int longitudDelTexto;
	char auxNombreApellido[15];

	if ((pArchivo = fopen("pruebaNombreApellido.txt", "w")) == NULL) { // se abre en modo escritura por la 'W'
		//y sino existe se crea ya que puse lo abri en el modo 'W'
		//a f open por parametro le paso el nombre del archivo y ke digo en que modo lo abro
		printf("el archivo no se puede abrir");
		exit(1);
	}

	longitudDelTexto = strlen(arrayNombreApellido); // le asigno con strlen la cantidad de letras en total que tiene
	//a la longitud del texto

	cantidadDeLetrasDelTexto = fwrite(arrayNombreApellido, sizeof(char),
			longitudDelTexto, pArchivo);
	//con fwrite escribo en el archivo y le paso por parametros el array de caracteres
	//le paso el sizeof de char, la longitud del texto y el puntero a file

	if (cantidadDeLetrasDelTexto < longitudDelTexto) {
		printf("error al escribir el archivo");
	} else {
		printf(" se escribieron %d caracteres", cantidadDeLetrasDelTexto);
	}
	fclose(pArchivo);
	//calido que la cantidad de letras no sea menor a la longitud que le pase
	// con fclose cierro el archivo

	/*-----------------------------------------------------------------------------*/
	if ((pArchivo = fopen("pruebaNombreApellido.txt", "r")) == NULL) {
		printf("el archivo no se puede abrir\n");
		exit(1);
	}

	while (!feof(pArchivo)) {
		// valido que sino llego al final del archivo que salga
		cantidadDeLetrasDelTexto = fscanf(pArchivo, "%s", auxNombreApellido);
		//llamo a fscanf pasandole por parametros el puntero a FILE, y la variable auxiliar de nombreApellidos

		if (cantidadDeLetrasDelTexto != 1) {

			if (feof(pArchivo)) {

				break;

			} else {
				printf("error,no leyo el ultimo registro\n");
				break;
			}
		}
		printf("\n%s", auxNombreApellido);
	}
	fclose(pArchivo);

	return EXIT_SUCCESS;
}

