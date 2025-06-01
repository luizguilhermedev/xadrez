# Simulação de Movimentos de Peças de Xadrez em C

Este projeto simula o movimento de quatro peças do xadrez (Torre, Bispo, Rainha e Cavalo) utilizando recursividade e loops aninhados em linguagem C.

## Descrição
- **Torre:** Move-se 5 casas para a direita (usando função recursiva).
- **Bispo:** Move-se 5 casas na diagonal para cima e à direita (usando função recursiva e também loops aninhados).
- **Rainha:** Move-se 8 casas para a esquerda (usando função recursiva).
- **Cavalo:** Move-se em "L" (duas casas para cima e uma para a direita), utilizando loops aninhados com múltiplas variáveis e controle de fluxo.

Cada movimento é impresso no console, mostrando a direção percorrida a cada casa.

## Como compilar e executar

1. Compile o programa:
   ```bash
   gcc xadrez.c -o xadrez
   ```
2. Execute o programa:
   ```bash
   ./xadrez
   ```

## Exemplo de saída
```
Movimento da Torre (5 casas para a direita):
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo (5 casas na diagonal para cima e à direita):
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

Movimento da Rainha (8 casas para a esquerda):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo (2 casas para cima e 1 para a direita):
Cima
Cima
Direita
```

## Objetivo
Este projeto foi desenvolvido como parte de um desafio para praticar recursividade, loops aninhados e controle de fluxo em C, com foco em clareza, organização e documentação do código.
