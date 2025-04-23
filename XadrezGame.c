#include <stdio.h>

// Simulação de movimentos de peças de xadrez
int main() {
    int i, contador1 = 0, contador2 = 0;
    int torre = 5, bispo = 5, rainha = 8;
    
// Movimentos da Torre -> 5 movimentos para a direita
    printf("Movimento Torre: \n");
    for (i = 1; i <= torre; i++)
    {
        printf("Direita \n");
    }

// Movimentos do Bispo -> 5 movimentos para cima e direita
    printf("Movimento Bispo: \n");
    while (contador1 < bispo)
    {
        printf("Cima, Direita \n");
        contador1++;
    }

// Movimentos da Rainha -> 8 movimentos para a esquerda
    printf("Movimento Rainha: \n");
    do {
        printf("Esquerda \n");
        contador2++;
    }
    while (contador2 < rainha);

    return 0;
}