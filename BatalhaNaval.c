//código utilizando array bidimensional
#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa com água
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio horizontal (linha 6, colunas 2 a 4)
    for (int j = 2; j <= 4; j++) {
        tabuleiro[6][j] = NAVIO;
    }

    // Navio vertical (coluna 7, linhas 4 a 6)
    for (int i = 4; i <= 6; i++) {
        tabuleiro[i][7] = NAVIO;
    }

    // Navio 1 diagonal principal: [1,1], [2,2], [3,3]
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][i] = NAVIO;
    }
    // Navio 2 diagonal secundária: [0,9], [1,8], [2,7]
    for (int i = 0; i <= 2; i++) {
        tabuleiro[i][9 - i] = NAVIO;
    }

    // Imprime o tabuleiro
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
