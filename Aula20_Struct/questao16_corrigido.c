typedef struct {
    char nome[50];
    int idade;
} Pessoa; /* faltava o ponto e virgula apos Pessoa */

int main(void) {
    Pessoa pessoa1;
    pessoa1.idade = 20;
    return 0;
}
