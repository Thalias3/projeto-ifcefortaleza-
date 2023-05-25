#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    printf("Número em hexadecimal: %X\n", numero);
    printf("Número em octal: %o\n", numero);

    return 0;
}
