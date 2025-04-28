#include <stdio.h>

// Simulação de movimentos de peças de xadrez

// Movimentos da Torre
void movTorre(int casas){ // Função recursiva para o movimento da torre
    if(casas > 0){
        printf("Direita. \n");
        movTorre(casas - 1);
    }
}

// Movimentos do Bispo
void movBispo(int casas) { // Função com loops aninhados para o movimento do bispo
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 2; j++) { // Loop para alternar entre "Cima" e "Direita"
            if (j == 0) {
                printf("Cima, ");
            } else {
                printf("Direita. \n");
            }
        }
    }
}

// Movimentos da Rainha
void movRainha(int casas){ // Função recursiva para o movimento da rainha
    if(casas > 0){
        printf("Esquerda. \n");
        movRainha(casas - 1);
    }
}

int main() {
    printf("Movimento Torre: \n");
    movTorre(5); // Número de movimentos da torre
    printf("\n");

    printf("Movimento Bispo: \n");
    movBispo(5); // Número de movimentos do bispo
    printf("\n");

    printf("Movimento Rainha: \n");
    movRainha(8); // Número de movimentos da rainha
    printf("\n");

    printf("Movimento Cavalo: \n");
    for (int posCavalo = 0, movCavalo = 3; posCavalo < movCavalo; posCavalo++, movCavalo--){ // Loop para simular os movimentos do cavalo
        printf("Cima, ");
        if(posCavalo == 1){
            printf("Direita. \n");
        }
    }

    printf("\n");

    return 0;
}