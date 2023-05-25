#include <stdio.h>

#define TAMANHO_VETOR 8

int main() {
    int vetor[TAMANHO_VETOR];
    int i, numero, posicao;
    int existe = 0;
    
    // preenche o vetor com números inteiros
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    // solicita um número do teclado
    printf("Digite um número inteiro para pesquisar no vetor: ");
    scanf("%d", &numero);
    
    // pesquisa o número no vetor
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == numero) {
            posicao = i;
            existe = 1;
            break;
        }
    }
    
       if (existe) {
        printf("O número %d foi encontrado na posição %d do vetor.\n", numero, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }
    
    return 0;
}
