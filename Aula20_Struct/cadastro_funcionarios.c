#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario1;
    Funcionario funcionario2;
    float diferenca;

    // Dados do primeiro funcionario
    printf("Digite o nome do funcionario 1: ");
    scanf(" %[^\n]", funcionario1.nome);
    printf("Digite a idade do funcionario 1: ");
    scanf("%d", &funcionario1.idade);
    printf("Digite o salario do funcionario 1: ");
    scanf("%f", &funcionario1.salario);

    // Dados do segundo funcionario
    printf("\nDigite o nome do funcionario 2: ");
    scanf(" %[^\n]", funcionario2.nome);
    printf("Digite a idade do funcionario 2: ");
    scanf("%d", &funcionario2.idade);
    printf("Digite o salario do funcionario 2: ");
    scanf("%f", &funcionario2.salario);

    // Mostrar os dados cadastrados
    printf("\n--- Funcionario 1 ---\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: %.2f\n", funcionario1.salario);

    printf("\n--- Funcionario 2 ---\n");
    printf("Nome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: %.2f\n", funcionario2.salario);

    // Verificar quem ganha mais
    printf("\n");
    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("%s tem o maior salario.\n", funcionario1.nome);
        printf("Diferenca salarial: %.2f\n", diferenca);
    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("%s tem o maior salario.\n", funcionario2.nome);
        printf("Diferenca salarial: %.2f\n", diferenca);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario.\n");
    }

    return 0;
}
