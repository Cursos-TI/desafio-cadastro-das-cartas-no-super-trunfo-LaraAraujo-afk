#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int Populacao;
    float Area;
    float PIB;
    int pontosturisticos;
    char estado;
    char codigo[50];
    //nova carta
    int Populacao2;
    float Area2;
    float PIB2;
    int pontosturisticos2;
    char estado2;
    char codigo2[50];
    
    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo: \n");
    scanf("%s", codigo);

    printf("Digite a população: \n ");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("estado: %c - codigo: %s", estado, codigo);
    printf("população: %d - Area: %f", Populacao, Area);
    printf("PIB: %f - pontosturisticos: %d", PIB, pontosturisticos);

    //nova carta
    printf("proxima carta: \n");

    printf("Digite a Populacao2: \n");
    scanf("%c", &Populacao2);

    printf("Digite a Area2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);

    printf("Digite os pontosturisticos2: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite o estado2: \n");
    scanf("%c", &estado2);

    printf("Digite o codigo2: \n");
    scanf("%s", codigo2);

    printf("estado2: %c - codigo2: %s", estado2, codigo2);
    printf("Populacao2: %d - Area2: %f", Populacao2, Area2);
    printf("PIB2: %f - pontosturisticos2: %d", PIB2, pontosturisticos2);



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
