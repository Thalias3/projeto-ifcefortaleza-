#include <stdio.h>

int ehPrimo(int num) {
  int i;
  if (num <= 1) {
    return 0;
  }
  for (i = 2; i <= num/2; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int vetor[10];
  int i;


  for (i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &vetor[i]);
  }

  printf("Os números primos do vetor são: ");
  for (i = 0; i < 10; i++) {
    if (ehPrimo(vetor[i])) {
      printf("%d ", vetor[i]);
    }
  }

  printf("\n");

  return 0;
}
