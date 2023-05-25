#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    
    printf("Digite os elementos da matriz 3x3:\n");
    
    // Preenche a matriz com valores fornecidos pelo usuário
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nTodos os elementos da matriz, exceto a diagonal principal, são:\n");
    
    // Imprime todos os elementos, exceto a diagonal principal
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    
    printf("\n");
    
    return 0;
}
