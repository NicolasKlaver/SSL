#include <stdio.h>
#include "conversion.h"

const int paso = 20;
const int minimo = 0;
const int maximo = 300;

void tabla_celsius_to_fahrenheit();
void tabla_fahrenheit_to_celsius();


int main (void) {
    tabla_celsius_to_fahrenheit();
    tabla_fahrenheit_to_celsius();

    return 0;
}



void tabla_celsius_to_fahrenheit() {
    printf("Tabla de conversion de celsius a fahrenheit\n\n");
    printf("%-6s \t %-6s \n", "C", "F");
    
    float temp_farenheit;
    float temp_celsius;
    
    for (temp_celsius=minimo; temp_celsius <= maximo; temp_celsius += paso) {
        temp_farenheit = fahrenheit(temp_celsius);
        printf("%-6.1f \t %-6.1f \n", temp_celsius, temp_farenheit);
    }

    printf("\n\n\n");
}



void tabla_fahrenheit_to_celsius() {
    printf("Tabla de conversion de fahrenheit a celsius\n\n");
    printf("%-6s \t %-6s \n", "F", "C");

    float temp_celsius;
    float temp_farenheit;

    for (temp_farenheit = minimo; temp_farenheit <= maximo; temp_farenheit += paso) {
        temp_celsius = celsius(temp_farenheit);
        printf("%-6.1f \t %-6.1f \n", farenheit, temp_celsius);
    }

    printf("\n\n\n");
}


