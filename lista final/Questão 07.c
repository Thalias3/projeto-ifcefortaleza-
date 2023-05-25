#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("As 4 primeiras letras do nome são: ");
    for (int i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
