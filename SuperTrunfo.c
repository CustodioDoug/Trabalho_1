#include <stdio.h>
int main(){
    char Carta1 = '1';
    char Estado1 = 'A';
    char CodigoDaCarta1[4] = "A01";
    char NomeDaCidade1[50] = "São Paulo";
    int Populacao1 = 11450000;
    float Area1 = 152120;
    float PIB1 = 699.0;
    int PontosTuristicos1 = 36;
    float DensidadePop1 = NomeDaCidade1 / Area1;
    float PibPC1 = PIB1 / Populacao1;

    char Carta2 = '2';
    char Estado2 = 'B';
    char CodigoDaCarta2[4] = "B01";
    char NomeDaCidade2[50] = "Rio de Janeiro";
    int Populacao2 = 6748000;
    float Area2 = 120000;
    float PIB2 = 671.0;
    int PontosTuristicos2 = 28;
    float DensidadePop2 = NomeDaCidade2 / Area2;
    float PibPC2 = PIB2 / Populacao2;


    printf("Carta1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("\n");

    printf("Carta1 \n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}