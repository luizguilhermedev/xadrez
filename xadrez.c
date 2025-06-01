#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    // Utiliza estrutura de repetição for
    int casas_torre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita)
    // Utiliza estrutura de repetição while
    int casas_bispo = 5;
    int j = 1;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    while (j <= casas_bispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    // Utiliza estrutura de repetição do-while
    int casas_rainha = 8;
    int k = 1;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casas_rainha);

    return 0;
}
