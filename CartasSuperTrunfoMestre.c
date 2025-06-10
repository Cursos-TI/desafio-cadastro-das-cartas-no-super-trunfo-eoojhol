#include <stdio.h>

#define MAX_NOME 100
#define MAX_ESTADO 50

int main() {
    // Carta 1
    char estado1[MAX_ESTADO];
    int codigo1;
    char nome1[MAX_NOME];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[MAX_ESTADO];
    int codigo2;
    char nome2[MAX_NOME];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    char c;

    // --- Entrada de dados Carta 1 ---
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%d", &codigo1);

    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de dados Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%d", &codigo2);

    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos ---
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000.0) / populacao1 : 0;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + ((densidade1 > 0) ? (1 / densidade1) : 0);

    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000.0) / populacao2 : 0;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + ((densidade2 > 0) ? (1 / densidade2) : 0);

    // --- Comparações ---
    int cmpPop = (populacao1 > populacao2);
    int cmpArea = (area1 > area2);
    int cmpPib = (pib1 > pib2);
    int cmpPontos = (pontosTuristicos1 > pontosTuristicos2);
    int cmpDensidade = (densidade1 < densidade2); // menor vence
    int cmpPerCapita = (pibPerCapita1 > pibPerCapita2);
    int cmpSuperPoder = (superPoder1 > superPoder2);

    // --- Exibição ---
    printf("\n===== Comparação de Cartas =====\n");
    printf("População: Carta 1 venceu (%d)\n", cmpPop);
    printf("Área: Carta 1 venceu (%d)\n", cmpArea);
    printf("PIB: Carta 1 venceu (%d)\n", cmpPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", cmpPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", cmpDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", cmpPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", cmpSuperPoder);

    return 0;
}
