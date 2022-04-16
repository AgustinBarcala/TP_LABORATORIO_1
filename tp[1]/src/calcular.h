/*
 * calcular.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Usuario
 */

#ifndef CALCULAR_H_
#define CALCULAR_H_

/// @fn int calcularCostos (int* kilometros, float precio1, float precio2, int flag).
/// @brief Calcula los costos de los vuelos y los muestra.
/// @param kilometros Valor que ingresa el usuario, precio1 Valor del primer precio, precio2 Segundo precio, flag Determina si calcula o muestra.
/// @return Un numero del tipo int para determinar si la funcion fue o no exitosa.
int calcularCostos (int* kilometros,float* precio1, float* precio2, int flag);



#endif /* CALCULAR_H_ */
