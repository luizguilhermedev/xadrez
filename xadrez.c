#include <stdio.h>

// Função recursiva para simular o movimento da Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para simular o movimento da Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para simular o movimento do Bispo na diagonal (cima e direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

int main() {
    // Simulação do movimento da Torre (recursivo)
    int casas_torre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casas_torre);
    printf("\n");

    // Simulação do movimento do Bispo (recursivo e com loops aninhados)
    int casas_bispo = 5;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispoRecursivo(casas_bispo);
    // Loops aninhados para o Bispo: externo vertical, interno horizontal
    for (int v = 0; v < casas_bispo; v++) {
        for (int h = 0; h < 1; h++) { // 1 casa horizontal por movimento diagonal
            printf("Cima Direita\n");
        }
    }
    printf("\n");

    // Simulação do movimento da Rainha (recursivo)
    int casas_rainha = 8;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casas_rainha);
    printf("\n");

    // Simulação do movimento do Cavalo (2 casas para cima e 1 para a direita)
    // Loops aninhados com múltiplas variáveis e controle de fluxo
    int casas_cima = 2;
    int casas_direita = 1;
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    for (int i = 0, mov = 0; i < casas_cima + casas_direita; i++) {
        if (i < casas_cima) {
            printf("Cima\n");
            mov++;
            if (mov == casas_cima) {
                int j = 0;
                while (j < casas_direita) {
                    if (j == 0) {
                        printf("Direita\n");
                        break; // Só move uma vez para a direita
                    }
                    j++;
                }
                break; // Após o movimento em L, encerra
            }
        }
    }
    printf("\n");

    return 0;
}
