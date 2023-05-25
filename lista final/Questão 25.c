#include <stdio.h>

int main() {
    int numeroAlunos, contador = 1;
    float nota, soma = 0, media;

    printf("Digite o número de alunos na sala: ");
    scanf("%d", &numeroAlunos);

    while (contador <= numeroAlunos) {
        printf("Digite a nota do aluno %d: ", contador);
        scanf("%f", &nota);
        
        soma += nota;
        contador++;
    }

    media = soma / numeroAlunos;

    printf("A média aritmética da turma é: %.2f\n", media);

    return 0;
}
