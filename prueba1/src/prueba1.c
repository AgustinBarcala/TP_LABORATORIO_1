/***************************************************
  1. Ingresar Kil�metros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de d�bito (descuento 10%)
b) Tarjeta de cr�dito (inter�s 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
4. Informar Resultados
�Latam:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerol�neas:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r �
5. Carga forzada de datos
6. Salir

*************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout , NULL);

	int opcion;
	int kilometros;
	int precio;
	int costo;
	int resultado;

	printf("1-Kilometros\n 2-Precio de vuelos\n 3-Calcular los costos\n 4-Informar resultados\n 5-Carga forzada de datos\n 6-Salir\n Seleccione la opcion que desea cargar: ");
	scanf("%d" , opcion);

	do{
		switch(opcion){

		case 1:
			printf("Ingrese la cantidad de kilometros:\n");
			scanf("%d" , kilometros);

			break;

		case 2:
			printf("Ingrese el precio del vuelo");
			scanf("%d" , precio);

			break;

		case 3:
			printf("Tarjeta de debito: %d\nTarjeta de credito: %d\nBitcoin: %d\nPrecio unitario: %d\nDiferencia de precio: %d" , precio - precio *10/100, precio + precio *25/100 , precio);

			break;

		case 4:

			break;

		case 5:

			break;




		}

		}while(opcion == 6);









	return 0;
}









