#include <stdio.h>
#include <stdlib.h>
// using namespace std

void main()
{
    printf("hola mundo\n\n");

    // Declaro una variable de tipo int
    int num = 42;

    // Declaro un puntero que apunte a la variable 'num'
    int *ptr = &num;

    // Muestro el contenido del puntero (el valor al que apunta)
    printf("1) Contenido del puntero: %d\n", *ptr);

    // Muestro la dirección de memoria almacenada por el puntero
    printf("2) Direccion de memoria almacenada por el puntero: %p\n", ptr);

    // Muestro la dirección de memoria de la variable 'num'
    printf("3) Direccion de memoria de la variable 'num': %p\n", &num);

    // Muestro la dirección de memoria del puntero 'ptr'
    printf("4) Direccion de memoria del puntero 'ptr': %p\n", &ptr);

    // Muestro el tamaño de la variable 'num' usando sizeof()
    printf("5) Tamaño de la variable 'num' en memoria: %zu bytes\n", sizeof(num));

}