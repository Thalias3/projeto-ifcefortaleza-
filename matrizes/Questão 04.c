#include <stdio.h>

#define TAMANHO 4

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    
    printf("Digite os elementos da matriz 4x4:\n");
    
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nOs elementos da diagonal principal são:\n");
    
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", matriz[i][i]);
    }
    
    printf("\n");
    
    return 0;
}
