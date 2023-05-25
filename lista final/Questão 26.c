#include <stdio.h>

int main() {
    int lado, i, j;

    printf("Digite o tamanho do lado do quadrado (entre 1 e 20): ");
    scanf("%d", &lado);

    if (lado >= 1 && lado <= 20) {
        for (i = 1; i <= lado; i++) {
            for (j = 1; j <= lado; j++) {
                printf("* ");
            }
            printf("\n");
        }
    } else {
        printf("Tamanho do lado inválido!\n");
    }

    return 0;
}
