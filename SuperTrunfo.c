//DESAFIO SUPER TRUNFO
 
#include <stdio.h>

int main(){
    char Carta1[10] = "Carta 1";
    char Estado1 = 'A';
    char CodigoDaCarta1[4] = "A01";
    char NomeDaCidade1[50] = "São Paulo";
    unsigned long int Populacao1 = 11451999;
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
    unsigned long int Populacao2 = 6211223;
    float Area2 = 1200.33;
    float PIB2 = 120.80;
    int PontosTuristicos2 = 28;
    float DensidadePop2 = Populacao2 / Area2;
    float PibPC2 = PIB2 / Populacao2;
    float SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + DensidadePop2 + PibPC2;

    printf("Carta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f km²\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %f hab/km²\n", DensidadePop1);
    printf("PIB per Capita: %d reais\n", PibPC1);
    printf("Super Poder: %f\n\n", SuperPoder1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %f km²\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %f hab/km²\n", DensidadePop2);
    printf("PIB per Capita: %d reais\n", PibPC2);
    printf("Super Poder: %f\n\n", SuperPoder2);

    //Comparação de Atributos:
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    resultado1 = Populacao1 > Populacao2;
    resultado2 = Area1 > Area2;
    resultado3 = PIB1 > PIB2;
    resultado4 = PontosTuristicos1 > PontosTuristicos2;
    resultado5 = DensidadePop1 > DensidadePop2;
    resultado6 = PibPC1 > PibPC2;
    resultado7 = SuperPoder1 < SuperPoder2;

    printf("Comparação de Atributos: \n");
    printf("População: %s Venceu: %d\n", Carta1, resultado1);
    printf("Área: %s Venceu: %d\n", Carta1, resultado2);
    printf("PIB: %s Venceu: %d\n", Carta1, resultado3);
    printf("Pontos Turísticos: %s Venceu: %d\n", Carta1, resultado4);
    printf("Densidade Populacional: %s Venceu: %d\n", Carta1, resultado5);
    printf("PIB per Capita: %s Venceu: %d\n", Carta1, resultado6);
    printf("Super Poder: %s Venceu: %d\n", Carta1, resultado7);

    return 0;
}