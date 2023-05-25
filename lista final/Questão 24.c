#include <stdio.h>

int main() {
    char tipoCarro;
    float distanciaRodada, consumoEstimado;

    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);
    printf("Digite a distância rodada em quilômetros: ");
    scanf("%f", &distanciaRodada);

    switch (tipoCarro) {
        case 'A':
            consumoEstimado = distanciaRodada / 8;
            printf("O consumo estimado do carro tipo A é: %.2f km/l\n", consumoEstimado);
            break;
        case 'B':
            consumoEstimado = distanciaRodada / 9;
            printf("O consumo estimado do carro tipo B é: %.2f km/l\n", consumoEstimado);
            break;
        case 'C':
            consumoEstimado = distanciaRodada / 12;
            printf("O consumo estimado do carro tipo C é: %.2f km/l\n", consumoEstimado);
            break;
        default:
            printf("Tipo de carro inválido. Digite A, B ou C.\n");
            break;
    }

    return 0;
}
