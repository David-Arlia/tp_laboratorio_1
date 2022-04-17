#include <stdio.h>
#include <stdlib.h>

int PedirEntero(char mensaje[], char mensajeError[], int max, int min)
{
	int numeroIngresado;

	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);
	while (numeroIngresado > max || numeroIngresado < min)
		{
		printf("%s",mensajeError);
		scanf("%d",&numeroIngresado);
		}
	return numeroIngresado;
}

float PedirFlotante(char mensaje[], char mensajeError[], int min)
{
	float numeroIngresado;

	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);
	while (numeroIngresado <= min )
		{
		printf("%s",mensajeError);
		scanf("%f",&numeroIngresado);
		}
	return numeroIngresado;
}

/*
 * Funciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: david
 */


