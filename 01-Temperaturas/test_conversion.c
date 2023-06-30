#include <stdio.h>
#include <assert.h>
#include "conversion.h"


void test_celsius() {
    double celsius = Celsius(32.0);
    assert(celsius == 0.0);

}

void test_fahrenheit() {
    double fahrenheit = Fahrenheit(0.0);
    assert(fahrenheit == 32.0);

}

int main() {
    test_celsius();
    test_fahrenheit();
    
    printf("Tests pasados sin errores\n");
    
	return 0;
}
