#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Vamos cadastrar o estado A \n");
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome);
    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite qual o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("DADOS DO ESTADO A \n\n");
    printf("CODIGO DA CIDADE: %d \n", codigo );
    printf("NOME DA CIDADE %s \n", nome);
    printf("POPULACAO: %d \n", populacao);
    printf("AREA: %f \n", area);
    printf("PIB DA CIDADE: %f \n", pib);
    printf("PONTOS TURISTICOS: %d \n", turisticos);

    return 0;
}
