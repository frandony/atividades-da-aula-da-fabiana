#include <stdio.h>

typedef struct {
    char modelo[50];
    int ano;
    float valor;
} Veiculo;

int main(void) {
    Veiculo veiculo;

    printf("Modelo: ");
    scanf(" %49[^\n]", veiculo.modelo);
    printf("Ano: ");
    scanf("%d", &veiculo.ano);
    printf("Valor: ");
    scanf("%f", &veiculo.valor);

    printf("\n--- VEICULO CADASTRADO ---\n");
    printf("Modelo: %s\n", veiculo.modelo);
    printf("Ano: %d\n", veiculo.ano);
    printf("Valor: R$ %.2f\n", veiculo.valor);

    return 0;
}
