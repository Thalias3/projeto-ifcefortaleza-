#include <stdio.h>

int main() {
    float metros, decimetros, centimetros, milimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("%.2f metros é igual a %.2f decímetros\n", metros, decimetros);
    printf("%.2f metros é igual a %.2f centímetros\n", metros, centimetros);
    printf("%.2f metros é igual a %.2f milímetros\n", metros, milimetros);

    return 0;
}

