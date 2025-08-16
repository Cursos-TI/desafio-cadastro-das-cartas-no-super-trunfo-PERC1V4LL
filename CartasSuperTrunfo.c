#include <stdio.h>

int main(){
    //Declaração das variáveis
    char estado, estado2;
    char nome[50], nome2[50];
    char codigo[4], codigo2[4];
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    float area, area2, pib, pib2, densidade1, densidade2, capita1, capita2;

    //Coleta de dados da primeira carta

    printf("Por favor insira os dados da primeira carta.\n\n");

    printf("Estado: ");
    scanf("%c", &estado);

    printf("Codigo: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //Coleta de dados da segunda carta

    printf("Por favor insira os dados da segunda carta.\n\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Calculo da densidade populacional

    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;

    //Calculo da PIB per capita

    capita1 = pib / populacao;
    capita2 = pib2 / populacao2;

    //Exibição dos dados da primeira carta

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", capita1);

    //Exibição dos dados da segunda carta

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", capita2);

    return 0;
}
