#include <stdio.h>

int main() {
    char estado1;
    char codigo1[10];
    char cidade1[50];//variaveis carta 01
    int turismo1, populacao1;
    float pib1, area1, densidade1, capita1, poder1;

    char estado2;
    char codigo2[10];
    char cidade2[50];//variaveis carta 02
    int turismo2, populacao2;
    float pib2, area2, densidade2, capita2, poder2;

    printf("\n");
    printf("Carta 01: \n");//Titulo
    
    printf("Primeira letra do seu Estado: ");
    scanf(" %c", &estado1);

    printf("Códido da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo1);

    densidade1 = populacao1/area1;
    capita1 = pib1/populacao1;

    poder1 = populacao1 + area1 + pib1 + turismo1 + densidade1 + capita1;

    printf("\n");


    printf("Carta 02: \n");//Titulo
    
    printf("Primeira letra do seu Estado: ");
    scanf(" %c", &estado2);

    printf("Códido da Carta, ex:(A01,B02...): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Quantidade de habitantes: ");
    scanf("%d", &populacao2);

    printf("Área da Cidade: ");
    scanf("%f", &area2);

    printf("PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);

    densidade2 = populacao2/area2;
    capita2 = pib2/populacao2;

    poder2 = populacao2 + area2 + pib2 + turismo2 + densidade2 + capita2;

    printf("\n");


    printf("Carta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f M²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f\n\n", poder1);

    printf("Carta 02: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f M²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n\n", poder2);

    printf("Comparação de Cartas: \n");
    printf("População: Carta 01 = %d\n", populacao1 > populacao2);
    printf("Área: Carta 01 = %d\n", area1 > area2);
    printf("PIB: Carta 01 = %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 01 = %d\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 01 = %d\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta 01 = %d\n", capita1 > capita2);
    printf("Super Poder: Carta 01 = %d\n", poder1 > poder2);

    return 0;

}