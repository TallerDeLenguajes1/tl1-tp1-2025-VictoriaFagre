// codigo_roto.c
//librerias agregadas por mi: 19:03 04/04/2026 
#include <stdio.h>
#include <stdlib.h>

void duplicar_numero(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int *valor1;
    int valor2;
    //agregue & a valor1
    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);
    //agregue ; a printf
    int suma = valor1 + valor2;
    printf("La suma es: %d\n", suma);

    duplicar_numero(valor1);
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0;
}