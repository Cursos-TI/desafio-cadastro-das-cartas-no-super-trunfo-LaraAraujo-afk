

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
#include <stdio.h>

int main() {
    // Declarando as variáveis
    char estado1[3], estado2[3];
    char codigo_cidade1[10], codigo_cidade2[10];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area_km1, area_km2;
    float PIB1, PIB2;
    int pontoturisticos1, pontoturisticos2;
    float densidade1, densidade2;
    float PIBpercapita1, PIBpercapita2;
    float super_poder1, super_poder2;

    // Cadastro da Carta 1
    printf("Digite a sigla do estado da primeira carta (ex: SP, RJ): ");
    scanf("%2s", estado1);

    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo_cidade1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area_km1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturisticos1);

    // Cadastro da Carta 2
    printf("\nDigite a sigla do estado da segunda carta: ");
    scanf("%2s", estado2);

    printf("Digite o código da segunda cidade: ");
    scanf("%s", codigo_cidade2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area_km2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    // Cálculo dos atributos
    densidade1 = populacao1 / area_km1;
    densidade2 = populacao2 / area_km2;

    if ( populacao1 > populacao2){
        printf("A população da carta1 e maior! Vitória! /n");
    } else {
        printf("A população da carta2 e maior! Derrota!");
    }

    PIBpercapita1 = PIB1 / populacao1;
    PIBpercapita2 = PIB2 / populacao2;

    // Cálculo do Super Poder 
    super_poder1 = populacao1 + area_km1 + PIB1 + pontoturisticos1 + PIBpercapita1 + (1 / densidade1);
    super_poder2 = populacao2 + area_km2 + PIB2 + pontoturisticos2 + PIBpercapita2 + (1 / densidade2);

    // Exibição das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_cidade1);
    printf("Nome: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area_km1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n", pontoturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_cidade2);
    printf("Nome: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", pontoturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu!\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Área: Carta %d venceu!\n", (area_km1 > area_km2) ? 1 : 2);
    printf("PIB: Carta %d venceu!\n", (PIB1 > PIB2) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu!\n", (pontoturisticos1 > pontoturisticos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu!\n", (densidade1 < densidade2) ? 1 : 2); // Menor densidade vence
    printf("PIB per Capita: Carta %d venceu!\n", (PIBpercapita1 > PIBpercapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu!\n", (super_poder1 > super_poder2) ? 1 : 2);

    return 0;
}

