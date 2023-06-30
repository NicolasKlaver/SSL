// Funciones de conversión.

#include <stdio.h>
#include "conversion.h"



double celsius(double temperatura_farenheit){
	return (temperatura_farenheit - 32) * 5.0 / 9.0;
}

double farenheit(double temperatura_celsius){
	return (temperatura_celsius*9.0) / 5.0 + 32.0;
}

