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
	int flagOpcion1 = 0;
	int flagOpcion2= 0;
	int flagOpcion3 = 0;

	do{
		printf("\nMENU DE OPCIONES\n1-Ingresar kilometros\n2-Ingresar precio de vuelo\n3-Calcular costos\n4-Informar resultados\n5-Carga forzada de datos\n6-Salir\nOPCION ELEGIDA: ");
		scanf("%d" , &opcion);

	while(opcion < 1 || opcion > 6){
		printf("\nPor favor, seleccione una opcion VALIDA:\n1-Ingresar kilometros\n2-Ingresar precio de vuelo\n3-Calcular costos\n4-Informar resultados\n5-Carga forzada de datos\n6-Salir\nOPCION ELEGIDA: ");
			scanf("%d" , &opcion);
		}

		switch(opcion){
		case 1:
			flagOpcion1 = 1;
			printf("\nIngrese los kilometros: ");
					scanf("%d" , &kilometros);

			while(kilometros <= 0){
					printf("\nLos kilometros no pueden ser cero o negativos, por favor ingrese un numero valido: ");
					scanf("%d" , &kilometros);
					}
			break;

		case 2:
			flagOpcion2 = 1;
			printf("\nIngrese el precio de Aerolineas: ");
			scanf("%f" , &precioAerolineas);
			while(precioAerolineas <= 0){
				printf("\nEl precio no puede ser cero o negativo, Ingrese un precio valido");
				scanf("%f" , &precioAerolineas);
			}
			printf("\nIngrese el precio de Latam: ");
			scanf("%f" , &precioLatam);
			while(precioLatam <= 0){
				printf("\nEl precio no puede ser cero o negativo, Ingrese un precio valido: ");
				scanf("%f" , &precioLatam);
			}

			break;

		case 3:
			if(flagOpcion1 == 1 && flagOpcion2 == 1){
				calcular = calcularCostos(&kilometros, &precioAerolineas, &precioLatam, 0);
				if(calcular == 0){
					printf("\nCOSTOS CALCULADOS CON EXITO\n");
				}else{
					printf("Hubo un ERROR al calcular los costos");
				}
				flagOpcion3 = 1;
			}else{
				printf("\nERROR, para poder calcular los costos PRIMERO DEBE INGRESAR las opciones 1 y 2.\n");
			}


			break;

		case 4:
			if(flagOpcion3 == 1){
				mostrar = calcularCostos(&kilometros , &precioAerolineas , &precioLatam, 1);
				if(mostrar == 0){
					printf("\nFIN LISTA DE COSTOS\n");
				}else{
					printf("HUBO UN ERROR EN LA LISTA");
				}
			}else{
				printf("\nPara poder informar resultados ANTES DEBE ingresar opcion 3\n");
			}

		break;

		case 5:
			kilometros = 7090;
			precioAerolineas = 162965;
			precioLatam = 159339;
			cargaForzada = calcularCostos(&kilometros, &precioAerolineas, &precioLatam, 0);
			cargaForzada = calcularCostos(&kilometros, &precioAerolineas, &precioLatam, 1);
			if (cargaForzada == 0){
				printf("\nFIN CARGA FORZADA\n");
			}else{
				printf("HUBO UN ERROR EN LA CARGA FORZADA");
			}
			flagOpcion1 = 0;
			flagOpcion2 = 0;
			flagOpcion3 = 0;
			break;

		case 6:
			printf("Saliendo...");
			break;

		default:
			printf("\nLa opcion no es valida, por favor ingresela nuevamente\n");
			break;

		}

	}while(opcion != 6);



	return EXIT_SUCCESS;
}

