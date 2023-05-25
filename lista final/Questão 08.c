#include <stdio.h>

int main() {
    float preco, novo_preco;
    float desconto = 0.09;  // 9% de desconto

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    novo_preco = preco - (preco * desconto);

    printf("Novo preço com desconto: %.2f\n", novo_preco);

    return 0;
}
