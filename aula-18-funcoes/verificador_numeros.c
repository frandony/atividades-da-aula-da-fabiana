#include <stdio.h>

int verificarPar(int numero) {
    return numero % 2 == 0 ? 1 : 0;
}

int main(void) {
    int numero;

    printf("===== VERIFICADOR DE NUMEROS =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (verificarPar(numero)) {
        printf("\nO numero %d e par.\n", numero);
    } else {
        printf("\nO numero %d e impar.\n", numero);
    }

    return 0;
}
