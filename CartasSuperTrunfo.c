
#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[3], estado2[3];
    char codigo_cidade1[10], codigo_cidade2[10];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area_km1, area_km2, PIB1, PIB2;
    int pontoturisticos1, pontoturisticos2;
    float densidade1, densidade2, PIBpercapita1, PIBpercapita2, super_poder1, super_poder2;

    // Cadastro Carta 1
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

    // Cadastro Carta 2
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

    // Cálculos adicionais
    densidade1 = populacao1 / area_km1;
    densidade2 = populacao2 / area_km2;
    PIBpercapita1 = PIB1 / populacao1;
    PIBpercapita2 = PIB2 / populacao2;
    super_poder1 = populacao1 + area_km1 + PIB1 + pontoturisticos1 + PIBpercapita1 + (1 / densidade1);
    super_poder2 = populacao2 + area_km2 + PIB2 + pontoturisticos2 + PIBpercapita2 + (1 / densidade2);

    // Menu dinâmico de atributos
    int attr1, attr2;
    float valor1_carta1 = 0, valor1_carta2 = 0, valor2_carta1 = 0, valor2_carta2 = 0;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &attr1);

    // Menu dinâmico excluindo a primeira opção
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != attr1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }

    do {
        scanf("%d", &attr2);
        if (attr2 == attr1) printf("Atributo repetido. Escolha outro:\n");
    } while (attr2 == attr1);

    // Função de comparação
    float soma1 = 0, soma2 = 0;
    for (int i = 1; i <= 2; i++) {
        int escolha = (i == 1) ? attr1 : attr2;
        float v1 = 0, v2 = 0;
        char nome_atributo[30];

        switch (escolha) {
            case 1: v1 = populacao1; v2 = populacao2; sprintf(nome_atributo, "População"); break;
            case 2: v1 = area_km1; v2 = area_km2; sprintf(nome_atributo, "Área"); break;
            case 3: v1 = PIB1; v2 = PIB2; sprintf(nome_atributo, "PIB"); break;
            case 4: v1 = pontoturisticos1; v2 = pontoturisticos2; sprintf(nome_atributo, "Pontos Turísticos"); break;
            case 5: v1 = densidade1; v2 = densidade2; sprintf(nome_atributo, "Densidade Demográfica"); break;
        }

        printf("\nComparando %s:\n", nome_atributo);
        printf("%s: %.2f\n", nome_cidade1, v1);
        printf("%s: %.2f\n", nome_cidade2, v2);

        int vencedor = 0;
        if (escolha == 5)
            vencedor = (v1 < v2) ? 1 : (v2 < v1) ? 2 : 0; // menor vence
        else
            vencedor = (v1 > v2) ? 1 : (v2 > v1) ? 2 : 0;

        printf("Resultado: ");
        if (vencedor == 1) printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        else if (vencedor == 2) printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        else printf("Empate!\n");

        // Armazenando valores para soma final
        if (i == 1) {
            valor1_carta1 = v1;
            valor1_carta2 = v2;
        } else {
            valor2_carta1 = v1;
            valor2_carta2 = v2;
        }
    }

    // Soma e resultado final
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;
    printf("\n--- Resultado Final ---\n");
    printf("%s - Soma dos atributos: %.2f\n", nome_cidade1, soma1);
    printf("%s - Soma dos atributos: %.2f\n", nome_cidade2, soma2);

    if (soma1 > soma2) {
        printf("Carta 1 (%s) venceu a rodada!\n", nome_cidade1);
    } else if (soma2 > soma1) {
        printf("Carta 2 (%s) venceu a rodada!\n", nome_cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
