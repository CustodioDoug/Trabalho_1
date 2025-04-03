#include <stdio.h>
#include <stdlib.h>

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

    int carta, comparacao1, comparacao2, resultado1, resultado2;

    printf("Escolha uma carta:\n");
    printf("1. %s\n", Carta1);
    printf("2. %s\n", Carta2);
    scanf("%d", &carta);
    
    switch(carta){
        case 1:
           printf("Você escolheu a %s\n", Carta1);
           break;
        case 2:
           printf("Você escolheu a %s\n", Carta2);
           break;
        default:
           printf("Opção inválida!\n");
           return 0;
    }

    printf("Selecione a primeira comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &comparacao1);

    switch(comparacao1){
        case 1:
            printf("Você escolheu a comparação de População!\n");
            resultado1 = (Populacao1 > Populacao2) ? 1 : 0;
            printf("Resultado: %d > %d\n", Populacao1, Populacao2);
            break;
        case 2:
            printf("Você escolheu a comparação de Área!\n");
            resultado1 = (Area1 > Area2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", Area1, Area2);
            break;
        case 3:
            printf("Você escolheu a comparação de PIB!\n");
            resultado1 = (PIB1 > PIB2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", PIB1, PIB2);
            break;
        case 4:
            printf("Você escolheu a comparação de Pontos Turísticos!\n");
            resultado1 = (PontosTuristicos1 > PontosTuristicos2) ? 1 : 0;
            printf("Resultado: %d > %d\n", PontosTuristicos1, PontosTuristicos2);
            break;
        case 5:
            printf("Você escolheu a comparação de Densidade Populacional!\n");
            resultado1 = (DensidadePop1 > DensidadePop2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", DensidadePop1, DensidadePop2);
            break;
        case 6:
            printf("Você escolheu a comparação de PIB per Capita!\n");
            resultado1 = (PibPC1 > PibPC2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", PibPC1, PibPC2);
            break;
        case 7:
            printf("Você escolheu a comparação de Super Poder!\n");
            resultado1 = (SuperPoder1 < SuperPoder2) ? 1 : 0;
            printf("Resultado: %.2f < %.2f\n", SuperPoder1, SuperPoder2);
            break;
        default:
           printf("Opção inválida!\n");
           return 0;
    }

    printf("Selecione a segunda comparação: ");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha a primeira comparação: ");
    scanf("%d", &comparacao2);

    switch(comparacao2){
        case 1:
            printf("Você escolheu a comparação de População!\n");
            resultado2 = (Populacao1 > Populacao2) ? 1 : 0;
            printf("Resultado: %d > %d\n", Populacao1, Populacao2);
            break;
        case 2:
            printf("Você escolheu a comparação de Área!\n");
            resultado2 = (Area1 > Area2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", Area1, Area2);
            break;
        case 3:
            printf("Você escolheu a comparação de PIB!\n");
            resultado2 = (PIB1 > PIB2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", PIB1, PIB2);
            break;
        case 4:
            printf("Você escolheu a comparação de Pontos Turísticos!\n");
            resultado2 = (PontosTuristicos1 > PontosTuristicos2) ? 1 : 0;
            printf("Resultado: %d > %d\n", PontosTuristicos1, PontosTuristicos2);
            break;
        case 5:
            printf("Você escolheu a comparação de Densidade Populacional!\n");
            resultado2 = (DensidadePop1 > DensidadePop2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", DensidadePop1, DensidadePop2);
            break;
        case 6:
            printf("Você escolheu a comparação de PIB per Capita!\n");
            resultado2 = (PibPC1 > PibPC2) ? 1 : 0;
            printf("Resultado: %.2f > %.2f\n", PibPC1, PibPC2);
            break;
        case 7:
            printf("Você escolheu a comparação de Super Poder!\n");
            resultado2 = (SuperPoder1 < SuperPoder2) ? 1 : 0;
            printf("Resultado: %.2f < %.2f\n", SuperPoder1, SuperPoder2);
            break;
        default:
           printf("Opção inválida!\n");
           return 0;
    }

    if (comparacao1 == comparacao2){
        printf("Você não pode escolher a mesma comparação duas vezes!\n");
        return 0;
    }

    if (resultado1 && resultado2){
        printf("Você venceu!\n");
    } else if (resultado1 != resultado2){
        printf("Você perdeu!\n");
    } else {
        printf("Empatou!\n");
    }
    
    return 0;
}