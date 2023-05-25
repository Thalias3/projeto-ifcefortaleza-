#include <stdio.h>

int main() {
    float tempo, velocidade, distancia;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;

    printf("A distância percorrida é: %.2f km\n", distancia);

    return 0;
}
