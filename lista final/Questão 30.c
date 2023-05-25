#include <stdio.h>

void listarCrescente(int lista[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (lista[i] > lista[j]) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    printf("Lista em ordem crescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarDecrescente(int lista[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (lista[i] < lista[j]) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    printf("Lista em ordem decrescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarOriginal(int lista[], int tamanho) {
    int i;

    printf("Lista na ordem original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int lista[10];
    int i, opcao;

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }

    printf("Escolha uma opção:\n");
    printf("1 - Listar em ordem crescente\n");
    printf("2 - Listar em ordem decrescente\n");
    printf("3 - Listar na ordem original\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            listarCrescente(lista, 10);
            break;
        case 2:
            listarDecrescente(lista, 10);
            break;
        case 3:
            listarOriginal(lista, 10);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}
