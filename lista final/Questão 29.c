#include <stdio.h>

int main() {
    float notas[5][4];
    float media_aluno[5];
    float media_turma = 0;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Digite as 4 notas do aluno %d:\n", i + 1);

        for (j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        media_aluno[i] = (notas[i][0] * 3 + notas[i][1] * 2 + notas[i][2] + notas[i][3]) / 7;
        printf("Média do aluno %d: %.2f\n", i + 1, media_aluno[i]);

        if (media_aluno[i] >= 7) {
            printf("Aluno %d: Passou\n", i + 1);
        } else if (media_aluno[i] >= 4) {
            printf("Aluno %d: Vai para a recuperação\n", i + 1);
            float pontos_recuperacao = 10 - media_aluno[i];
            printf("Pontos necessários para passar: %.2f\n", pontos_recuperacao);
        } else {
            printf("Aluno %d: Não passou\n", i + 1);
            float pontos_reprovacao = 4 - media_aluno[i];
            printf("Pontos necessários para passar: %.2f\n", pontos_reprovacao);
        }

        printf("\n");
        media_turma += media_aluno[i];
    }

    media_turma /= 5;
    printf("Média da turma: %.2f\n", media_turma);

    return 0;
}
