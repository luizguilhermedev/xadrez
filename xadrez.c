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
    printf("\n");

    // Simulação do movimento do Cavalo (2 casas para baixo e 1 para a esquerda)
    // Utiliza loops aninhados: for externo e while interno
    int casas_baixo = 2;
    int casas_esquerda = 1;
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    for (int i = 0; i < casas_baixo; i++) {
        printf("Baixo\n"); // Cada iteração representa uma casa para baixo
    }
    int j = 0;
    while (j < casas_esquerda) {
        printf("Esquerda\n"); // Após descer, move uma casa para a esquerda
        j++;
    }
    // Fim do movimento do Cavalo

    return 0;
}
