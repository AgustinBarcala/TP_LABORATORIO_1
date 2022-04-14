/***************************************************
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

*************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;

	printf("seleccione una opcion (1-6): ");
	scanf("%d" ,&numero);

	switch(numero){
	case 1:
		printf("selecciono la opcion 1");
		break;

	case 2:
		printf("selecciono la opcion 2");
		break;

	case 3:
		printf("selecciono la opcion 3");
		break;

	case 4:
		printf("selecciono la opcion 4");
		break;

	case 5:
		printf("selecciono la opcion 5");
		break;

	case 6:
		printf("selecciono la opcion 6");
		break;

	default: printf("no ingreso un numero valido");
	}



	return 0;
}









