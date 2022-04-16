/*
 ============================================================================
 1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:

3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)

4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “

5. Carga forzada de datos

6. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calcular.h"

int main(void) {
	setbuf(stdout , NULL);

	int opcion;
	int kilometros;
	float precioAerolineas;
	float precioLatam;
	int calcular;
	int mostrar;
	int cargaForzada;



	do{
		printf("\nMENU DE OPCIONES\n1-Ingresar kilometros\n2-Ingresar precio de vuelo\n3-Calcular costos\n4-Informar resultados\n5-Carga forzada de datos\n6-Salir\nOPCION ELEGIDA: ");
		scanf("%d" , &opcion);

	while(opcion < 1 || opcion > 6){
		printf("\nPor favor, seleccione una opcion VALIDA:\n1-Ingresar kilometros\n2-Ingresar precio de vuelo\n3-Calcular costos\n4-Informar resultados\n5-Carga forzada de datos\n6-Salir\nOPCION ELEGIDA: ");
			scanf("%d" , &opcion);
		}

		switch(opcion){
		case 1:
			printf("\nIngrese los kilometros: ");
					scanf("%d" , &kilometros);

			while(kilometros < 0){
					printf("\nLos kilometros no pueden ser negativos, por favor ingrese un numero valido: ");
					scanf("%d" , &kilometros);
					}
			break;

		case 2:

			printf("\nIngrese el precio de Aerolineas: ");
			scanf("%f" , &precioAerolineas);
			printf("\nIngrese el precio de Latam: ");
			scanf("%f" , &precioLatam);

			break;

		case 3:
			printf("\nCOSTOS CALCULADOS CON EXITO\n");
			calcular = calcularCostos(&kilometros , &precioAerolineas , &precioLatam, 0);

			break;

		case 4:
			printf("\nLISTA DE LOS COSTOS:\n");
			mostrar = calcularCostos(&kilometros , &precioAerolineas , &precioLatam, 1);

		break;

		case 5:
			// cargaForzada = cargaForzadaDeDatos();
			break;

		case 6:
			break;

		default:
			printf("\nLa opcion no es valida, por favor ingresela nuevamente\n");
			break;

		}

	}while(opcion != 6);



	return EXIT_SUCCESS;
}

