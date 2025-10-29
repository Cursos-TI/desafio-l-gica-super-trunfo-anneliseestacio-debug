#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[30];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    // Cadastro das cartas (exemplo fixo)
    Carta carta1 = {"Rio de Janeiro", "01", "Rio de Janeiro", 6748000, 1200.27, 452000000.0, 20, 0, 0};
    Carta carta2 = {"Bahia", "03", "Salvador", 2887000, 692.8, 63100000.0, 15, 0, 0};

    // Cálculo de densidade e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibição das informações cadastradas
    printf("===== CARTAS CADASTRADAS =====\n");
    printf("Carta 1: %s (%s)\n", carta1.nomeCidade, carta1.estado);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f milhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n\n", carta1.pibPerCapita);

    printf("Carta 2: %s (%s)\n", carta2.nomeCidade, carta2.estado);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f milhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);

    // ===========================================
    // Escolha do atributo para comparação:
    // (altere aqui se quiser comparar outro atributo)
    // ===========================================
    printf("\n===== COMPARAÇÃO =====\n");
    printf("Atributo escolhido: PIB per capita\n");

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("\nCarta 1 - %s venceu!\n", carta1.nomeCidade);
        printf("PIB per capita: %.2f > %.2f\n", carta1.pibPerCapita, carta2.pibPerCapita);
    } else if (carta1.pibPerCapita < carta2.pibPerCapita) {
        printf("\nCarta 2 - %s venceu!\n", carta2.nomeCidade);
        printf("PIB per capita: %.2f > %.2f\n", carta2.pibPerCapita, carta1.pibPerCapita);
    } else {
        printf("\nEmpate! Ambas as cartas têm o mesmo PIB per capita.\n");
    }

    return 0;
}

