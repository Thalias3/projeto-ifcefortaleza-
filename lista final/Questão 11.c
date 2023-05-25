#include <stdio.h>

int main() {
    float valor_hora_aula, desconto_inss, salario_bruto, salario_liquido;
    int num_aulas;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valor_hora_aula);

    printf("Digite o número de aulas dadas: ");
    scanf("%d", &num_aulas);

    printf("Digite a porcentagem de desconto do INSS: ");
    scanf("%f", &desconto_inss);

    salario_bruto = valor_hora_aula * num_aulas;
    salario_liquido = salario_bruto - (salario_bruto * (desconto_inss / 100));

    printf("Salário líquido: %.2f\n", salario_liquido);

    return 0;
}
