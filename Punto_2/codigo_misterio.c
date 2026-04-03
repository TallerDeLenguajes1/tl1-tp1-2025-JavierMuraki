#include <stdio.h>

// Revierte el numero: ejemplo 123 a 321
void revertir_numero(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev;
}

// Divide el numero: ejemplo 10 a 5 (basicamente 10/2)
void dividir_numero(int *p) {
    *p = *p / 2;
}

// Suma el numero con sus numeros individuales: ejemplo 123 + (1 + 2 + 3)
void sumar_numeros_individales(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

// Procesa el numero con sus otras funciones
void procesar_numero(int *numero_puntero) {
    revertir_numero(numero_puntero);
    dividir_numero(numero_puntero);
    sumar_numeros_individales(numero_puntero);
}

int main() {
    int numero = 452;

    printf("Iniciando depuracion con el valor: %d\n", numero);

    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_numero(&numero);

    printf("Resultado final del numero: %d\n", numero);

    return 0;
}