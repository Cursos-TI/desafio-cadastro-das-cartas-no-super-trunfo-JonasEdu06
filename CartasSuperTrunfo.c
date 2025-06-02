#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados da Carta 1 e da Carta 2
    char estado1, estado2;                 // Estado representado por uma letra (A a H)
    char codigo1[4], codigo2[4];           // Código da carta (ex: A01) — 3 caracteres + '\0'
    char nomeCidade1[50], nomeCidade2[50]; // Nome da cidade, até 49 caracteres + '\0'
    int populacao1, populacao2;             // População da cidade
    float area1, area2;                     // Área em km²
    float pib1, pib2;                       // PIB em bilhões de reais
    int pontosTuristicos1, pontosTuristicos2; // Número de pontos turísticos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada dos dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1);                 // Lê um caractere ignorando espaços em branco antes
    printf("Informe o código da carta (ex: A01): ");
    scanf("%3s", codigo1);                  // Lê até 3 caracteres para o código
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);          // Lê uma linha inteira até o ENTER (inclui espaços)
    printf("Informe a população: ");
    scanf("%d", &populacao1);               // Lê um número inteiro
    printf("Informe a área em km²: ");
    scanf("%f", &area1);                    // Lê um número decimal (float)
    printf("Informe o PIB em bilhões de reais: ");
    scanf("%f", &pib1);                     // Lê um número decimal (float)
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);       // Lê um número inteiro
    densidade1 = populacao1 / area1;      // Cálculo da densidade populacional: número de habitantes por km²
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Cálculo do PIB per capita: multiplicamos (em bilhões) por 1 bilhão para converter em reais

    // Entrada dos dados para a Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta (ex: B03): ");
    scanf("%3s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área em km²: ");
    scanf("%f", &area2);
    printf("Informe o PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da Carta 1 formatados
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);

    // Exibição dos dados da Carta 2 formatados
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);

    return 0; // Finaliza o programa
}
