#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char confirmacao[50];
    char perfil[20];
    char mensagem[100] = "Bem-vindo(a), ";
    const char *descricaoPerfil;

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    if (strcmp(perfil, "ADMIN") == 0) {
        descricaoPerfil = "Administrador";
    } else if (strcmp(perfil, "COMUM") == 0) {
        descricaoPerfil = "Comum";
    } else {
        descricaoPerfil = "Perfil invalido";
    }

    strcpy(confirmacao, nome);

    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    printf("Perfil: %s\n", descricaoPerfil);

    printf("\n%s\n", mensagem);
    if (strcmp(descricaoPerfil, "Perfil invalido") != 0) {
        printf("Cadastro realizado com sucesso.\n");
    } else {
        printf("Cadastro nao concluido: perfil deve ser ADMIN ou COMUM.\n");
    }

    return 0;
}
