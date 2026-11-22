#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int opcao;
    int quantidade;
    int caractere;

    do {
        printf("\n===== CADASTRO DE FUNCIONARIOS =====\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Visualizar funcionarios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            return 1;
        }

        if (opcao == 1) {
            printf("Quantos funcionarios deseja cadastrar (ate 5)? ");
            if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 5) {
                printf("Quantidade invalida!\n");
                continue;
            }

            /* modo "a": acrescenta sem apagar os registros anteriores */
            arquivo = fopen("funcionarios.txt", "a");
            if (arquivo == NULL) {
                perror("Erro ao abrir arquivo");
                continue;
            }

            for (int i = 0; i < quantidade; i++) {
                printf("\n--- Funcionario %d ---\n", i + 1);
                printf("Nome: ");
                scanf(" %49[^\n]", f.nome);
                printf("Salario: ");
                scanf("%f", &f.salario);
                printf("Horas extras: ");
                scanf("%d", &f.horasExtras);

                fprintf(arquivo, "Nome: %s\n", f.nome);
                fprintf(arquivo, "Salario: R$ %.2f\n", f.salario);
                fprintf(arquivo, "Horas extras: %d\n", f.horasExtras);
                fprintf(arquivo, "----------------------------------------\n");
            }

            if (fclose(arquivo) != 0) {
                perror("Erro ao salvar os dados");
            } else {
                printf("\nDados gravados com sucesso em funcionarios.txt\n");
            }
        } else if (opcao == 2) {
            arquivo = fopen("funcionarios.txt", "r");
            if (arquivo == NULL) {
                printf("\nNenhum funcionario cadastrado.\n");
                continue;
            }

            printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
            while ((caractere = fgetc(arquivo)) != EOF) {
                putchar(caractere);
            }
            fclose(arquivo);
        } else if (opcao == 0) {
            printf("\nPrograma encerrado.\n");
        } else {
            printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
