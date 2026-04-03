// Faltaba la libreria <stdio.h> para que funcionen printf y scanf
#include <stdio.h>

// Se estaba pasando el valor pero no el puntero que modificar
void duplicar_numero(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    // Le faltaba & al scanf para que pueda ingresarle el valor
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    // Agrege ; al final de la linea
    int suma = valor1 + valor2;
    printf("La suma es: %d\n", suma);

    // Le agrege & para que pase el puntero de la variable ala funcion
    duplicar_numero(&valor1);
    printf("El primer valor duplicado es: %d\n", valor1);

    // Al return 0 le faltaba ; al final de la linea
    return 0;
}