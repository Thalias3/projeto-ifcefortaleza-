#include <stdio.h>

int main() {
    float valorCompra, valorVenda;

    printf("Digite o valor de compra do produto: ");
    scanf("%f", &valorCompra);

    if (valorCompra < 20.00) {
        valorVenda = valorCompra + (valorCompra * 0.45); 
    } else {
        valorVenda = valorCompra + (valorCompra * 0.30);
    }

    printf("O valor de venda do produto é: %.2f\n", valorVenda);

    return 0;
}
