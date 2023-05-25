#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    
 
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
  
    printf("Números ímpares do vetor:");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf(" %d", vetor[i]);
        }
    }
    printf("\n");
    
    return 0;
}
