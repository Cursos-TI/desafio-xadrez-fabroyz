#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Aluno: Fabrício Silva Costa

int main() {
    // MOVIMENTO DA TORRE (for)
    int contadorTorre;
    int torre = 5;

    printf("== MOVIMENTO DA TORRE ==\n");
    // Ela se moverá 5 casas para a direita.
    for (contadorTorre = 1; contadorTorre <= torre; contadorTorre++) {
        printf("Direita (%d)\n", contadorTorre);
    }

    // MOVIMENTO DO BISPO (while)
    int bispo = 5;
    int contadorBispo = 1;

    printf("\n== MOVIMENTO DO BISPO ==\n");
    // Ele se moverá 5 casas para cima e para a direita.
    while (contadorBispo <= bispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    // MOVIMENTO DA RAINHA (do-while)
    int rainha = 8;
    int contadorRainha = 1;

    printf("\n== MOVIMENTO DA RAINHA ==\n");
    // Ela se moverá 8 casas para a esquerda.
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= rainha);

    // MOVIMENTO DO CAVALO (for + while)
    printf("\n=== Movimento do Cavalo ===\n");

    // O Cavalo move-se em "L": duas casas em uma direção + uma casa perpendicular.
    // Neste desafio: duas casas para baixo e uma casa para a esquerda.
    int movimentosVerticais = 2;   // Duas casas para baixo
    int movimentosHorizontais = 1; // Uma casa para a esquerda

    int passoVertical = 1;

    // Primeiro loop (for) que move o cavalo em sentido vertical
    for (passoVertical = 1; passoVertical <= movimentosVerticais; passoVertical++) {
        printf("Baixo (%d)\n", passoVertical);
    }

    // Segundo loop (while) que move o cavalo em sentido horizontal
    int passoHorizontal = 1;
    while (passoHorizontal <= movimentosHorizontais) {
        printf("Esquerda (%d)\n", passoHorizontal);
        passoHorizontal++;
    }

    return 0;
}
