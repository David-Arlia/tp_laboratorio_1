/*
 ============================================================================
 Name        : TP.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include "Calculos.h"

int main(void) {

setbuf(stdout,NULL);
int opcion;
float kilometrosIngresados;
float preciosAerolineas;
float preciosLatam;
float precioDebitoAerolineas;
float precioDebitoLatam;
float precioCreditoAerolineas;
float precioCreditoLatam;
float bitcoinAerolineas;
float bitcoinLatam;
float KmAerolineas;
float KmLatam;
float diferenciaDePrecios;

	do{
		printf("1. Ingresar Kil%cmetros: ( km=%.2f)\n",162,kilometrosIngresados);
		printf("2. Ingresar Precio de Vuelos: (Aerol%cneas=%.2f, Latam=%.2f)\n",161,preciosAerolineas,preciosLatam);
		printf("3. Calcular todos los costos:\n"
			   "4. Informar Resultados\n"
			   "5. Carga forzada de datos\n"
			   "6. Salir\n");

		opcion = PedirEntero("Ingrese una opcion: ","Error, Ingrese una opcion valida: ",6,1);

		switch(opcion)
		{
		case 1:
			system("cls");
			kilometrosIngresados = PedirFlotante("Ingrese un kilometraje: ", "Error, ingrese un kilometraje valido: ",0);
			break;
		case 2 :
			system("cls");
			do
			{
				printf("1-Precio Aerolineas\n2-Precio Latam\n0-Salir\n");
				opcion = PedirEntero("Ingrese una opcion: ", "Ingrese una opcion valida. (1,2,0): ", 2, 0);

				if(opcion == 1){
					preciosAerolineas = PedirFlotante("Ingrese un precio: ", "Error, ingrese un precio valido: ",0);
				}
				else if(opcion == 2){
					preciosLatam = PedirFlotante("Ingrese un precio: ", "Error, ingrese un precio valido: ",0);
				}
			}while(opcion != 0);
			break;
		case 5:
					preciosAerolineas = 162965;
					preciosLatam = 159339;
					kilometrosIngresados = 7090;

		case 3:
				precioDebitoAerolineas = DescuentoDebitoAerolineas(preciosAerolineas);
				precioDebitoLatam = DescuentoDebitoLatam(preciosLatam);
				precioCreditoAerolineas = InteresCreditoAerolineas(preciosAerolineas);
				precioCreditoLatam = InteresCreditoLatam(preciosLatam);
				bitcoinAerolineas = PrecioBitcoinAerolineas(preciosAerolineas);
				bitcoinLatam = PrecioBitcoinLatam(preciosLatam);
				KmAerolineas = PrecioKmAerolineas(preciosAerolineas, kilometrosIngresados);
				KmLatam = PrecioKmLatam(preciosLatam, kilometrosIngresados);
				diferenciaDePrecios = DiferenciaPrecios(preciosAerolineas, preciosLatam);
			break;
		case 4 :
			printf("Precio de Aerolineas: $%.2f\n ",preciosLatam);
			printf("\na) Precio con tarjeta de débito en Latam: $ %.2f\n ",precioDebitoLatam);
			printf("b) Precio con tarjeta de crédito en Latam: $ %.2f\n ",precioCreditoLatam);
			printf("c) Precio pagando con bitcoin en Latam: $ %f\n ",bitcoinLatam);
			printf("d) Precio unitario por Km en Latam: $ %.2f\n ",KmLatam);

			printf("Precio de Latam: $%.2f\n ",preciosAerolineas);
			printf("\na) Precio con tarjeta de débito en Latam: $ %.2f\n ",precioDebitoAerolineas);
			printf("b) Precio con tarjeta de crédito en Latam: $ %.2f\n ",precioCreditoAerolineas);
			printf("c) Precio pagando con bitcoin en Latam: $ %f\n ",bitcoinAerolineas);
			printf("d) Precio unitario por Km en Latam: $ %.2f\n ",KmAerolineas);

			printf("\nLa diferencia de precio es: $ %.2f\n ",diferenciaDePrecios );
			break;

		case 6:
			break;

		}

	}while(opcion != 6);

	return EXIT_SUCCESS;
}

