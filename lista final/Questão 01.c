#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, diametro, comprimento, area;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    comprimento = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Diâmetro: %.2f\n", diametro);
    printf("Comprimento: %.2f\n", comprimento);
    printf("Área: %.2f\n", area);

    return 0;
}
