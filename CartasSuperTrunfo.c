#include <stdio.h>

int main() {

    char estado1;     //Uma letra do Estado
    char codigo1[10]; //Código da Carta ex: A01,B02...
    char cidade1[50]; //Nome da Cidade
    int populacao1;   //Quantidade de habitantes
    float area1;      //area em m²
    float pib1;       //Produto interno Bruto
    int numero1;      //Quantidade de pontos turisticos

    char estado2;     //Uma letra do Estado
    char codigo2[10]; //Código da Carta ex: A01,B02...
    char cidade2[50]; //Nome da Cidade
    int populacao2;   //Quantidade de habitantes
    float area2;      //area em m²
    float pib2;       //Produto interno Bruto
    int numero2;      //Quantidade de pontos turisticos


    printf("Carta 1: \n");

    printf("Digite a inicial de um Estado: ");
    scanf(" %c", &estado1);                              //Estado

    printf("Digite o Código da carta, (ex: A01,B02): ");
    scanf("%s", codigo1);                                // Código da carta
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);                                //Cidade
    
    printf("Digite quantos habitantes há: ");
    scanf("%d", &populacao1);                             //População

    printf("Digite a área: ");
    scanf("%f", &area1);                                  //Area
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);                                   //PIB
    
    printf("Digite quantos pontos turisticos tem: ");
    scanf("%d", &numero1);                                //Número de pontos turisticos
    
    

    printf("Carta 2: \n");

    printf("Digite a inicial de um Estado: ");
    scanf(" %c", &estado2);                              //Estado

    printf("Digite o Código da carta, (ex: A01,B02): ");
    scanf("%s", codigo2);                                // Código da carta
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);                                //Cidade
    
    printf("Digite quantos habitantes há: ");
    scanf("%d", &populacao2);                             //População

    printf("Digite a área: ");
    scanf("%f", &area2);                                  //Area
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);                                   //PIB
    
    printf("Digite quantos pontos turisticos tem: ");
    scanf("%d", &numero2);                                //Número de pontos turisticos


//Carta 1: Informação que vai aparecer
    printf("Carta 1: \n");                               //Titulo da Carta 1

    printf("Estado: %c\n", estado1);                      //Estado

    printf("Código da Carta: %s\n", codigo1);             // Código da carta

    printf("Cidade: %s\n", cidade1);                      //Cidade

    printf("População: %d\n", populacao1);                //População

    printf("Área: %.2f M²\n", area1);                       //Area

    printf("PIB: %.2f\n", pib1);                            //PIB

    printf("Número de pontos turisticos: %d\n", numero1); //Número de pontos turisticos


//Carta 2: Informação que vai aparecer
    printf("Carta 2: \n");                               //Titulo da Carta 2

    printf("Estado: %c\n", estado2);                      //Estado

    printf("Código da Carta: %s\n", codigo2);             // Código da carta

    printf("Cidade: %s\n", cidade2);                      //Cidade

    printf("População: %d\n", populacao2);                //População

    printf("Área: %.2f M²\n", area2);                       //Area

    printf("PIB: %.2f\n", pib2);                            //PIB

    printf("Número de pontos turisticos: %d\n", numero2); //Número de pontos turisticos

    return 0;
}