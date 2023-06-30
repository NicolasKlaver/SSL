#include <stdio.h>
#include <assert.h>
#include "conversion.h"


void test_celsius() {
    assert(celsius(37.0) == 98.6);
    assert(celsius(225.0) == 107.2);

}

void test_fahrenheit() {
    assert(fahrenheit(-17.7) == 0.0);
    assert(fahrenheit(65.5) == 150.0);

}

int main() {
    test_celsius();
    test_fahrenheit();
    
    printf("Tests pasados sin errores\n");
    
	return 0;
}
