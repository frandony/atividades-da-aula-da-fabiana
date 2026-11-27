#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main(void) {
    Aluno aluno1;

    strcpy(aluno1.nome, "Maria"); /* nome agora recebe um valor */
    aluno1.idade = 20;
    aluno1.nota = 8.5;

    printf("%s\n", aluno1.nome);    /* string -> %s */
    printf("%d\n", aluno1.idade);   /* inteiro -> %d */
    printf("%.1f\n", aluno1.nota);  /* float -> %f */

    return 0;
}
