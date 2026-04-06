#include <stdio.h>

// Ejercicio 5a
int cuadrado(int x) {
    return x * x;
}

// Ejercicio 5b
void cuadrado_void(int x, int *resultado) {
    *resultado = x * x;
}

// Ejercicio 5d
void invertir(int *a, int *b) { // Deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Ejercicio 5e
void orden(int *a, int *b) { // Deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b;
    int res;


    // Ejercicio 5d
    printf("Ingrese dos valores: ");
    scanf("%d %d", &a, &b);


    // Ejercicio 5a
    printf("Cuadrado de a: %d\n", cuadrado(a));


    // Ejercicio 5b
    cuadrado_void(b, &res);
    printf("Cuadrado de b (void): %d\n", res);


    // Ejercicio 5c
    printf("\nVariable a:\n");
    printf("Direccion: %p\n", &a);
    printf("Contenido: %d\n", a);

    printf("\nVariable b:\n");
    printf("Direccion: %p\n", &b);
    printf("Contenido: %d\n", b);


    // Ejercicio 5d
    invertir(&a, &b);
    printf("\nValores invertidos:\n");
    printf(" a = %d\n", a);
    printf(" b = %d\n", b);

    // Ejercicio 5e
    orden(&a, &b);
    printf("Valores ordenados:\n");
    printf(" a = %d\n", a);
    printf(" b = %d\n", b);

    return 0;
}