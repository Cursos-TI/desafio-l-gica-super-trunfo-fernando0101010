#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
struct CartaSuperTrunfo {
    char estado[3];            // Ex: "SP"
    char codigo[4];           // Ex: "A01"
    char nomeCidade[50];     // Nome da cidade
    int populacao;           // Número de habitantes
    float area;              // Área em km²
    float pib;               // PIB em bilhões de reais
    int pontosTuristicos;   // Número de pontos turísticos
};

int main() {
    // Declaração das duas cartas
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    // Declaração de variáveis auxiliares
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (sigla, ex: SP): ");
    scanf("%s", carta1.estado);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado (sigla, ex: RJ): ");
    scanf("%s", carta2.estado);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo da densidade populacional
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    // Cálculo do PIB per capita
    pibPerCapita1 = carta1.pib * 1000000000 / carta1.populacao;  // Convertendo PIB para reais
    pibPerCapita2 = carta2.pib * 1000000000 / carta2.populacao;

    // Exibição das informações cadastradas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.es


