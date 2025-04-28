#include <stdio.h>

// Simulação de movimentos de peças de xadrez
int main() {
    int i, j, k, l; // Variáveis de controle para os loops
    int movTorre, movBispo, movRainha, movCavalo; // Variáveis para os movimentos das peças
    
// Movimentos da Torre Usando For While -> 5 movimentos para a direita
    printf("Movimento Torre: \n");
    movTorre = 5; // Número de movimentos da torre

    for (i = 1; i <= movTorre; i++) 
    {
        printf("Direita. \n");
    }
    printf("\n");

// Movimentos do Bispo Usando While -> 5 movimentos para cima e direita
    printf("Movimento Bispo: \n");
    movBispo = 5; // Número de movimentos do bispo
    j = 0; // Inicializa o contador de movimentos do bispo

    while (movBispo > j)
    {
        printf("Cima, Direita. \n");
        j++;
    }
    printf("\n");

// Movimentos da Rainha usando Do While -> 8 movimentos para a esquerda
    printf("Movimento Rainha: \n");
    movRainha = 8; // Número de movimentos da rainha
    k = 0; // Inicializa o contador de movimentos da rainha
    do {
        printf("Esquerda. \n");
        k++;
    }
    while (k < movRainha);
    printf("\n");

// Movimentos do Cavalo usando For -> movimento em formato de "L", duas casas para baixo e uma para a esquerda
    printf("Movimento Cavalo: \n");
    movCavalo = 1; // Número de movimentos do cavalo
    
    while (movCavalo--){ // Loop para o movimento do cavalo
        for (l = 0; l < 2; l++){ // Loop para duas casas para baixo
            printf("Baixo, \n");
        }
    printf("Esquerda. \n");
    }
    printf("\n");

    return 0;
}