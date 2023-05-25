#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        float raizQuadrada = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n", numero, raizQuadrada);
    } else {
        float quadrado = numero * numero;
        printf("O quadrado de %.2f é %.2f\n", numero, quadrado);
    }

    return 0;
}
