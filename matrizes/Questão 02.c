#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int matrizMultiplicada[LINHAS][COLUNAS];
    int i, j;
    
    printf("Digite os elementos da matriz 3x3:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matrizMultiplicada[i][j] = matriz[i][j] * 2;
        }
    }
    
    printf("\nA matriz original é:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA matriz multiplicada por 2 é:\n");
    
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matrizMultiplicada[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
