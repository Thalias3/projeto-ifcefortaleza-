#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade >= 10 && idade <= 14) {
        printf("Categoria: Infantil\n");
    } else if (idade >= 15 && idade <= 17) {
        printf("Categoria: Juvenil\n");
    } else if (idade >= 18 && idade <= 25) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Categoria: Fora das faixas etárias especificadas\n");
    }

    return 0;
}
