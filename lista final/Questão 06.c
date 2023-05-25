#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    float soma, produto, quadrado1, raiz, seno;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    produto = num1 * pow(num2, 2);
    quadrado1 = pow(num1, 2);
    raiz = sqrt(pow(num1, 2) + pow(num2, 2));
    seno = sin(num1 - num2);

    printf("Soma dos números: %.2f\n", soma);
    printf("Produto do primeiro número pelo quadrado do segundo: %.2f\n", produto);
    printf("Quadrado do primeiro número: %.2f\n", quadrado1);
    printf("Raiz quadrada da soma dos quadrados: %.2f\n", raiz);
    printf("Seno da diferença do primeiro número pelo segundo: %.2f\n", seno);

    return 0;
}
