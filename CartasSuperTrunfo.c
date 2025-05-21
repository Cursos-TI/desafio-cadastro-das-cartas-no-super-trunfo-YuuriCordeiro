#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char nome1[] = "Reino de Eldoria";
    int populacao1 = 8500; // em milhares
    float pib1 = 320.75;   // em bilhões
    int pontosTuristicos1 = 12;

    // Variáveis da carta 2
    char nome2[] = "Império de Zandor";
    int populacao2 = 9200; // em milhares
    float pib2 = 410.60;   // em bilhões
    int pontosTuristicos2 = 18;

    // Impressão dos dados
    printf("======= SUPER TRUNFO: CARTAS DE PAISES FICTICIOS =======\n");

    printf("\n--- Carta 1: %s ---\n", nome1);
    printf("Populacao: %d mil habitantes\n", populacao1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d locais\n", pontosTuristicos1);

    printf("\n--- Carta 2: %s ---\n", nome2);
    printf("Populacao: %d mil habitantes\n", populacao2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d locais\n", pontosTuristicos2);

    return 0;
}
