#include <stdio.h>

int main() {

    // ---- CARTA 1 ----
    int carta1, pontos1;
    unsigned long int populacao1;
    float area1, pib1, pibpercapita1, superpoder1, densidade1;
    char estado1[10], cidade1[50], codigo1[10];

    printf("=== DIGITE OS DADOS DA CARTA 1 ===\n");
    printf("Número da carta: ");
    scanf("%d", &carta1);

    printf("Estado: ");
    scanf("%s", estado1);

    sprintf(codigo1, "%s%02d", estado1, carta1);

    printf("Cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos
    pib1 = pib1 * 1000000000; // converter bilhões → reais
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0f / densidade1);

    // ---- CARTA 2 ----
    int carta2, pontos2;
    unsigned long int populacao2;
    float area2, pib2, pibpercapita2, superpoder2, densidade2;
    char estado2[10], cidade2[50], codigo2[10];

    printf("\n=== DIGITE OS DADOS DA CARTA 2 ===\n");
    printf("Número da carta: ");
    scanf("%d", &carta2);

    printf("Estado: ");
    scanf("%s", estado2);

    sprintf(codigo2, "%s%02d", estado2, carta2);

    printf("Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    pib2 = pib2 * 1000000000; // converter bilhões → reais
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1.0f / densidade2);

    // ---- RESULTADOS ----
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // ---- COMPARAÇÕES ----
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: %d\n", (pontos1 > pontos2));
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2));
    printf("PIB per Capita: %d\n", (pibpercapita1 > pibpercapita2));
    printf("Super Poder: %d\n", (superpoder1 > superpoder2));

    return 0;
}
