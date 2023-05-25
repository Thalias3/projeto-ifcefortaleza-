#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, soma = 0;
    
    printf("Digite os 6 valores numéricos inteiros da matriz 2x3:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    printf("\nA matriz digitada é:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos 6 números é: %d\n", soma);
    
    return 0;
}
