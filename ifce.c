#include <stdio.h>

int main() {
  int vetor[10];
  int i, maior;

    for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
  }

 
  maior = vetor[0];

 
  for (i = 1; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
  }

  printf("O maior número é: %d\n", maior);

  return 0;
}
