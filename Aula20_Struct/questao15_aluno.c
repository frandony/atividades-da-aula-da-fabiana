#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
} Aluno;

int main(void) {
    Aluno aluno;
    float media;

    printf("Nome: ");
    scanf(" %49[^\n]", aluno.nome);
    printf("Nota 1: ");
    scanf("%f", &aluno.nota1);
    printf("Nota 2: ");
    scanf("%f", &aluno.nota2);

    media = (aluno.nota1 + aluno.nota2) / 2;

    printf("\nAluno: %s\n", aluno.nome);
    printf("Media: %.2f\n", media);
    if (media >= 7) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
