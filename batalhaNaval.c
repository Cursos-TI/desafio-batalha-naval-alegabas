#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

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
 
    // POSICIONAMENTO DOS NAVIOS

    // Posiciona o Navio 1 na Horizontal (Linha 3 - Colunas D, E e F)

    int linha1 = 2; // Linha 3 (índice 2)
    int coluna1 = 3; // Começa na coluna D (índice 3)
    int cont = 0; // Conta as posições já preenchidas a partir do índice
        while (cont < 3) {
            tabuleiro[linha1][coluna1 + cont] = 3;
            cont++;
        }

    // Posiciona o Navio 2 na Vertical (Coluna H - Linhas 6, 7 e 8)
    
    int coluna2 = 7; // Coluna H (índice 7)
    int linha2 = 5; // Começa na linha 6 (índice 5)
    cont = 0; // Conta as posições já preenchidas a partir do índice
        while (cont < 3) {
            tabuleiro[linha2 + cont][coluna2] = 3;
            cont++;
        }

    // Navio diagonal principal: B2-C3-D4 → (1,1), (2,2), (3,3)
    for (i = 0; i < 3; i++) {
        tabuleiro[1 + i][1 + i] = 3;
    }

    // Navio diagonal secundária: I1-H2-G3 → (0,8), (1,7), (2,6)
    for (i = 0; i < 3; i++) {
        tabuleiro[0 + i][8 - i] = 3;
    }

 
    // Cabeçalho com letras de A a J representando as colunas
    printf("    "); // Espaçamento para alinhar as colunas corretamente
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