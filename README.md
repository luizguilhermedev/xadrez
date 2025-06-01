# Simulação de Movimentos de Peças de Xadrez em C

Este projeto simula o movimento de três peças do xadrez (Torre, Bispo e Rainha) utilizando diferentes estruturas de repetição em linguagem C.

## Descrição
- **Torre:** Move-se 5 casas para a direita (usando `for`).
- **Bispo:** Move-se 5 casas na diagonal para cima e à direita (usando `while`).
- **Rainha:** Move-se 8 casas para a esquerda (usando `do-while`).

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

Movimento da Rainha (8 casas para a esquerda):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
```

## Objetivo
Este projeto foi desenvolvido como parte de um desafio para praticar estruturas de repetição em C, com foco em clareza, organização e documentação do código.
