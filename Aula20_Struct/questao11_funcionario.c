#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario;

    printf("Nome: ");
    scanf(" %49[^\n]", funcionario.nome);
    printf("Idade: ");
    scanf("%d", &funcionario.idade);
    printf("Salario: ");
    scanf("%f", &funcionario.salario);

    printf("\n--- FUNCIONARIO CADASTRADO ---\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Salario: R$ %.2f\n", funcionario.salario);

    return 0;
}
