/********************************

 3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)


 ********************************/
#include <stdio.h>
#include <stdlib.h>

int retorno = -1;
float tarjetaDebitoAerolineas;
float tarjetaCreditoAerolineas;
float bitcoinAerolineas;
float precioPorKilometroAerolineas;

float tarjetaDebitoLatam;
float tarjetaCreditoLatam;
float bitcoinLatam;
float precioPorKilometroLatam;

float diferenciaDePrecio;

int calcularCostos (int* kilometros,float* precio1, float* precio2, int flag){

if(kilometros != NULL && precio1 != NULL && precio2 != NULL && flag == 0){

		tarjetaDebitoAerolineas = *precio1 - *precio1 * 10/100;
		tarjetaCreditoAerolineas = *precio1 + *precio1 *25/100;
		bitcoinAerolineas = *precio1/4606954.55;
		precioPorKilometroAerolineas = *precio1 / *kilometros;

		tarjetaDebitoLatam = *precio2 - *precio2 *10/100;
		tarjetaCreditoLatam = *precio2 + *precio2 *25/100;
		bitcoinLatam = *precio2/4606954.55;
		precioPorKilometroLatam = *precio2 / *kilometros;

		if(*precio1 >= *precio2){
			diferenciaDePrecio = *precio1 - *precio2;
		}else{
			diferenciaDePrecio = *precio2 - *precio1;
		}


		retorno = 0;
	}

		if(kilometros != NULL && precio1 != NULL && precio2 != NULL && flag == 1){
		printf("\nKILOMETROS INGRESADOS: %d\n\nAEROLINEAS: %.2f\nEl precio con debito es:$ %.2f\nEl precio con credito es:$ %.2f\nEl precio en Bitcoin es: %.8f BTC\nEl precio por km es:$ %.2f\n\nLATAM: %.2f\nEl precio con debito es:$ %.2f\nEl precio con credito es:$ %.2f\nEl precio en Bitcoin es: %.8f BTC\nEl precio por km es:$ %.2f\nLa diferencia de precio es:$ %.2f\n"
				,*kilometros,*precio1,tarjetaDebitoAerolineas,tarjetaCreditoAerolineas,bitcoinAerolineas,precioPorKilometroAerolineas,*precio2,tarjetaDebitoLatam,tarjetaCreditoLatam,bitcoinLatam,precioPorKilometroLatam, diferenciaDePrecio);


		retorno = 0;
		}




return retorno;
}
