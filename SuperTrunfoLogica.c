#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char Carta1[10] = "Carta 1";
    char Estado1 = 'A';
    char CodigoDaCarta1[4] = "A01";
    char NomeDaCidade1[50] = "São Paulo";
    unsigned int Populacao1 = 11451999;
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
    unsigned int Populacao2 = 6211223;
    float Area2 = 1200.33;
    float PIB2 = 120.80;
    int PontosTuristicos2 = 28;
    float DensidadePop2 = Populacao2 / Area2;
    float PibPC2 = PIB2 / Populacao2;
    float SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + DensidadePop2 + PibPC2;

    int carta, opcao;

    printf("Escolha uma carta:\n\n");
    printf("1. %s\n", Carta1);
    printf("2. %s\n", Carta2);
    scanf("%d", &carta);

    switch(carta){
        case 1:
        printf("Você escolheu a %s\n", Carta1);
        printf("Estado: %c\n", Estado1);
        printf("Código da Carta: %s\n", CodigoDaCarta1);
        printf("Nome da Cidade: %s\n", NomeDaCidade1);
        printf("População: %u\n", Populacao1);
        printf("Área: %.2f km²\n", Area1);
        printf("PIB: %.2f bilhões\n", PIB1);
        printf("Pontos Turísticos: %d\n", PontosTuristicos1);
        printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePop1);
        printf("PIB per Capita: %.2f reais\n", PibPC1);
        printf("Super Poder: %.2f\n", SuperPoder1);
        break;
        case 2:
        printf("Você escolheu a %s\n", Carta2);
        printf("Estado: %c\n", Estado2);
        printf("Código da Carta: %s\n", CodigoDaCarta2);
        printf("Nome da Cidade: %s\n", NomeDaCidade2);
        printf("População: %u\n", Populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f bilhões\n", PIB2);
        printf("Pontos Turísticos: %d\n", PontosTuristicos2);
        printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePop2);
        printf("PIB per Capita: %.2f reais\n", PibPC2);
        printf("Super Poder: %.2f\n", SuperPoder2);
        break;
        default:
        printf("Opção inválida!\n");
        return 1;
        
    }
    

    printf("Escolha uma opção para combater com outra carta: \n\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar Densidade Populacional\n");
    printf("6. Comparar PIB per Capita\n");
    printf("7. Comparar Super Poder\n");
    printf("8. Sair\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            if(Populacao1 > Populacao2){
                printf("%s venceu com o saldo de %d habitantes. (*%s = %d*)\n", Carta1, Populacao1, Carta2, Populacao2);
            } else if(Populacao1 < Populacao2){
                printf("%s venceu com o saldo de %d habitantes. (*%s = %d*)\n", Carta2, Populacao2, Carta1, Populacao1);
            } else {
                printf("Empate!\n");}
            break;
        case 2:
            if(Area1 > Area2){
                printf("%s venceu com o saldo de %.2f km². (*%s = %.2f km²*)\n", Carta1, Area1, Carta2, Area2);
            } else if(Area1 < Area2){
                printf("%s venceu com o saldo de %.2f km². (*%s = %.2f km²*)\n", Carta2, Area2, Carta1, Area1);
            } else {
                printf("Empate!\n");}
            break;
        case 3:
            if(PIB1 > PIB2){
                printf("%s venceu com o saldo de %.2f bilhões. (*%s = %.2f bilhões*)\n", Carta1, PIB1, Carta2, PIB2);
            } else if(PIB1 < PIB2){
                printf("%s venceu com o saldo de %.2f bilhões. (*%s = %.2f bilhões*)\n", Carta2, PIB2, Carta1, PIB1);
            } else {
                printf("Empate!\n");}
            break;
        case 4:
            if(PontosTuristicos1 > PontosTuristicos2){
                printf("%s venceu com o saldo de %d pontos turísticos. (*%s = %d*)\n", Carta1, PontosTuristicos1, Carta2, PontosTuristicos2);
            } else if(PontosTuristicos1 < PontosTuristicos2){
                printf("%s venceu com o saldo de %d pontos turísticos. (*%s = %d*)\n", Carta2, PontosTuristicos2, Carta1, PontosTuristicos1);
            } else {
                printf("Empate!\n");}
            break;
        case 5:
            if(DensidadePop1 > DensidadePop2){
                printf("%s venceu com o saldo de %.2f habitantes/km². (*%s = %.2f habitantes/km²*)\n", Carta1, DensidadePop1, Carta2, DensidadePop2);
            } else if(DensidadePop1 < DensidadePop2){
                printf("%s venceu com o saldo de %.2f habitantes/km². (*%s = %.2f habitantes/km²*)\n", Carta2, DensidadePop2, Carta1, DensidadePop1);
            } else {
                printf("Empate!\n");}
            break;
        case 6:
            if(PibPC1 > PibPC2){
                printf("%s venceu com o saldo de %.2f reais. (*%s = %.2f reais*)\n", Carta1, PibPC1, Carta2, PibPC2);
            } else if(PibPC1 < PibPC2){
                printf("%s venceu com o saldo de %.2f reais. (*%s = %.2f reais*)\n", Carta2, PibPC2, Carta1, PibPC1);
            } else {
                printf("Empate!\n");}
            break;
        case 7:
            if(SuperPoder1 > SuperPoder2){
                printf("%s venceu com o saldo de %.2f. (*%s = %.2f*)\n", Carta1, SuperPoder1, Carta2, SuperPoder2);
            } else if(SuperPoder1 < SuperPoder2){
                printf("%s venceu com o saldo de %.2f. (*%s = %.2f*)\n", Carta2, SuperPoder2, Carta1, SuperPoder1);
            } else {
                printf("Empate!\n");}
            break;
        case 8:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }    
    return 0;
}