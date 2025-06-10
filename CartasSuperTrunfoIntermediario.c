#include <stdio.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_ESTADO 50

int main() {
    // Variáveis para Carta 1
    char estado1[MAX_ESTADO];
    int codigo1;
    char nome1[MAX_NOME];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis para Carta 2
    char estado2[MAX_ESTADO];
    int codigo2;
    char nome2[MAX_NOME];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    char c; // usado para limpar o buffer

    // --- Entrada de dados da Carta 1 ---
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Estado (sigla): ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%d", &codigo1);

    // Limpa buffer antes de ler nome com espaços
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000.0) / populacao1 : 0;

    // --- Entrada de dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Estado (sigla): ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%d", &codigo2);

    // Limpa buffer antes de ler nome com espaços
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000.0) / populacao2 : 0;


    // --- Exibição das cartas ---
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("=====================\n");

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("=====================\n");

    return 0;
}
