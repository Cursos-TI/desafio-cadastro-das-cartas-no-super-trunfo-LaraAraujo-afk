#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // declarando as variaveis
    char estado1, estado2;
    char codigo_cidade1[5], codigo_cidade2;
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area_km1, area_km2;
    float PIB1, PIB2;
    int ponto_turisticos1, ponto_turisticos2;

    //cadastro da carta 1
    printf("Digite a letra do estado da primeira carta: \n");
    scanf("%c, &estado1");

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo_cidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho desse estado: \n");
    scanf("%f", &area_km1);

    printf("Digite o PIB desse estado: \n");
    scanf("%f", &PIB1);

    printf("Digite o Numero de pontos turisticos: \n");
    scanf("%f", &ponto_turisticos1);

    //Cadastrando 2 carta
    printf("Digite a letra da segunda carta: \n");
    scanf("%c", &estado2);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo_cidade2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("Digite o Tamanho da População: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho desse estado: \n");
    scanf("%f", &area_km2);

    printf("Digite o PIB desse estado: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%f", &ponto_turisticos2);

    // exibindo os dados das cartas:

    //carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo_cidade1);
    printf("nome: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Area do estado: %f \n", area_km1);
    printf("PIB: %.2f Bilhões de reais \n", PIB1);
    printf("Pontos turisticos: %f \n", ponto_turisticos1);

    //carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo_cidade2);
    printf("nome: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Area do estado: %f \n", area_km2);
    printf("PIB: %.2f Bilhões de reais \n", PIB2);
    printf("Pontos turisticos: %f \n", ponto_turisticos2);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
