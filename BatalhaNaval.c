#include <stdio.h>

int main() {

    char * tabuleiro [10][10]= { //Cria o Tabuleiro personalizado
        {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "3", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "3", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "3", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"0", "3", "3", "3", "0", "0", "0", "0", "0", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
        {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"}
    };
    printf("Tabuleiro de Batalha Naval\n\n");

    printf("  A B C D E F G H I \n"); // Adiciona letras para as colunas

    for(int i = 0; i < 10; i++) { // Loop para imprimir o tabuleiro
        printf("%d ", i + 1); // Adiciona números para as fileiras
            for( int j = 0; j < 10; j++) { 
                printf("%s ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    return 0;
}
