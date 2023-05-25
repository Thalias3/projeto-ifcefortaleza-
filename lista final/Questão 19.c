#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Não-eleitor\n");
    } else if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatório\n");
    } else if ((idade >= 16 && idade < 18) || idade > 65) {
        printf("Eleitor facultativo\n");
    }

    return 0;
}
