#include <stdio.h>

int main() {
    printf("Hola mundo\n");

    int variable = 10; // Variable normal
    int *puntero; // Declaración del puntero
    puntero = &variable; // El puntero apunta a la variable

    // 1 - Contenido del puntero (valor al que apunta)
    printf("1 - Contenido del puntero (*puntero): %d\n", *puntero);

    // 2 - Direccion de memoria almacenada por el puntero
    printf("2 - Direccion almacenada en el puntero: %p\n", puntero);

    // 3 - Direccion de memoria de la variable
    printf("3 - Direccion de la variable: %p\n", &variable);

    // 4 - Direccion de memoria del puntero
    printf("4 - Direccion del puntero: %p\n", &puntero);

    // 5 - Tamaño de la variable
    printf("5 - Tamano de la variable (sizeof): %lu bytes\n", sizeof(variable));

    return 0;
}