#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite o dia do aniversário: ");
    scanf("%d", &dia);
    printf("Digite o mês do aniversário: ");
    scanf("%d", &mes);
    printf("Digite o ano do aniversário: ");
    scanf("%d", &ano);

    if (ano != 2023) {
        printf("Ano inválido. Digite o ano de 2023.\n");
    } else if (mes < 1 || mes > 12) {
        printf("Mês inválido. Digite um valor entre 1 e 12.\n");
    } else if (dia < 1 || dia > 31) {
        printf("Dia inválido. Digite um valor entre 1 e 31.\n");
    } else {
        printf("Data de aniversário válida.\n");
    }

    return 0;
}
