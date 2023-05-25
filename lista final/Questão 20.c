#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        trocarValores(&num1, &num2);
    }
    if (num2 > num3) {
        trocarValores(&num2, &num3);
    }
    if (num1 > num2) {
        trocarValores(&num1, &num2);
    }

    printf("Números em ordem crescente: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
