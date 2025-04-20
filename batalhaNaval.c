#include <stdio.h>

int main() {
    
    // Criação do tabuleiro para Batalha Naval (matriz 10x10)
    int tabuleiro[10][10];
    int i, j;

    printf("###  TABULEIRO DE BATALHA NAVAL  ###\n");

    // Inicia o tabuleiro com "0" (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Cabeçalho com letras de A a J representando as colunas
    printf("    ");
    for (j = 0; j < 10; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");

    // Linhas do tabuleiro representadas de 1 a 10
    for (i = 0; i < 10; i++) {
        printf("%2d |", i + 1);
        for (j = 0; j < 10; j++) {
           printf(" %d ", tabuleiro[i][j]); // Impressão do tabuleiro
        } 
        printf("\n");
    }

    return 0;
}