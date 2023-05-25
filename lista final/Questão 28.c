#include <stdio.h>

int main() {
    int idade, faixa_etaria, i;
    float peso, media_1_10 = 0, media_11_20 = 0, media_21_30 = 0, media_maior_30 = 0;
    int count_1_10 = 0, count_11_20 = 0, count_21_30 = 0, count_maior_30 = 0;

    for (i = 1; i <= 15; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) {
            media_1_10 += peso;
            count_1_10++;
        } else if (idade >= 11 && idade <= 20) {
            media_11_20 += peso;
            count_11_20++;
        } else if (idade >= 21 && idade <= 30) {
            media_21_30 += peso;
            count_21_30++;
        } else {
            media_maior_30 += peso;
            count_maior_30++;
        }
    }

    if (count_1_10 > 0) {
        media_1_10 /= count_1_10;
        printf("Média de peso das pessoas de 1 a 10 anos: %.2f\n", media_1_10);
        printf("Quantidade de pessoas de 1 a 10 anos: %d\n", count_1_10);
    }

    if (count_11_20 > 0) {
        media_11_20 /= count_11_20;
        printf("Média de peso das pessoas de 11 a 20 anos: %.2f\n", media_11_20);
        printf("Quantidade de pessoas de 11 a 20 anos: %d\n", count_11_20);
    }

    if (count_21_30 > 0) {
        media_21_30 /= count_21_30;
        printf("Média de peso das pessoas de 21 a 30 anos: %.2f\n", media_21_30);
        printf("Quantidade de pessoas de 21 a 30 anos: %d\n", count_21_30);
    }

    if (count_maior_30 > 0) {
        media_maior_30 /= count_maior_30;
        printf("Média de peso das pessoas com mais de 30 anos: %.2f\n", media_maior_30);
        printf("Quantidade de pessoas com mais de 30 anos: %d\n", count_maior_30);
    }

    return 0;
}
