all: conversiontest tablas

test: test_conversion.o conversion.o 
	gcc -Wall -g -o test_conversion test_conversion.o conversion.o
	./conversiontest

tablas: conversion.o tablas_de_conversion.o
	gcc -Wall -g -o tablas conversion.o tablas_de_conversion.o
	./tablas


conversionTest.o: conversionTest.c conversion.h
	gcc -Wall -g -c conversionTest.c

conversion.o: conversion.c conversion.h
	gcc -Wall -g -c conversion.c

tablas_de_conversion.o: tablas_de_conversion.c conversion.h
	gcc -Wall -g -c tablas_de_conversion.c


clean: 
	del /Q *.o test_conversion.exe tablas.exe

