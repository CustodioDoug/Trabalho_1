//Desafio Novato Super Trunfo Logica
#include <stdio.h>

int main(){
    char Carta1[10] = "Carta 1";
    char Estado1 = 'A';
    char CodigoDaCarta1[4] = "A01";
    char NomeDaCidade1[50] = "São Paulo";
    int Populacao1 = 11451999;
    float Area1 = 1521.20;
    float PIB1 = 211.30;
    int PontosTuristicos1 = 36;
    float DensidadePop1 = Populacao1 / Area1;
    float PibPC1 = PIB1 / Populacao1;
    float SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + DensidadePop1 + PibPC1;

    char Carta2[10] = "Carta 2";
    char Estado2 ='B';
    char CodigoDaCarta2[4] = "B01";
    char NomeDaCidade2[50] = "Rio de Janeiro";
    int Populacao2 = 6211223;
    float Area2 = 1200.33;
    float PIB2 = 120.80;
    int PontosTuristicos2 = 28;
    float DensidadePop2 = Populacao2 / Area2;
    float PibPC2 = PIB2 / Populacao2;
    float SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + DensidadePop2 + PibPC2;

    printf("Comparação de cartas (Atributo: Área): \n");
    printf("%s - %s (SP): %f\n", Carta1, NomeDaCidade1, Area1);
    printf("%s - %s (RJ): %f\n", Carta2, NomeDaCidade2, Area2);

    if (Area1 > Area2){
        printf("Resultado: %s (%s) Venceu\n", Carta1, NomeDaCidade1);
    } else 
        printf("Resultado: %s (%s) Venceu\n", Carta2, NomeDaCidade2);

    return 0;
}