#include <stdio.h>

// Declaración de funciones
int cuadrado(int num);
void cuadrado_void(int num);
void mostrar_direccion(int *num);
void Invertir(int a, int b);
void orden(int a, int b);


void main() {
    //Declaración de variables
    int num1, num2;
    
    // f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla.
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("\nNumeros ingresados: num1 = %d, num2 = %d\n", num1, num2);

    // a) Calcular y mostrar el cuadrado de num1
    printf("\nEl cuadrado de %d es: %d\n", num1, cuadrado(num1));

    // b) Mostrar el cuadrado de num2 usando la funcion void
    cuadrado_void(num2);

    // c) Mostrar la dirección y el contenido de num1 y num2
    printf("\nDireccion y contenido de las variables:\n");
    mostrar_direccion(&num1);
    mostrar_direccion(&num2);

    // d) Invertir los valores de num1 y num2
    Invertir(num1, num2);

    // e) Ordenar num1 y num2
    orden(num1, num2);
}


// a) Haga una función que devuelva el cuadrado de un número
int cuadrado(int num) {
    return num * num;
}

// b) Haga la función anterior, pero devolviendo un tipo void
void cuadrado_void(int num) {
    int resultado = num * num;
    printf("El cuadrado de %d es: %d\n", num, resultado);
}

// c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void mostrar_direccion(int *num) {
    printf("\nDireccion de la variable: %p\n", num);
    printf("Contenido de la variable: %d\n", *num);
}

// d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void Invertir(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("\nNúmeros invertidos: num1 = %d, num2 = %d\n", a, b);
}

// e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Números ordenados: num1 = %d, num2 = %d\n", a, b);
}