#include <stdio.h>

int main() {
    
    int carta, populacao, polos;
    float area, pib, pibpercapita, densidade;
    char estado[50], cidade[50];

    printf("Digite el numero de su carta:  \n");
    scanf("%d", &carta);

    printf("Digite la letra de su Estado:  \n");
    scanf("%s", estado);

    printf("Digite el nombre de la Ciudad:  \n");
    scanf(" %49[^\n]", cidade);

    printf("Digite la Poblacion de la Ciudad:  \n");
    scanf("%d", &populacao);

    printf("Digita el valor del area de la ciudad:  \n");
    scanf(" %f", &area);

    printf("Digita el valor del PIB:  \n");
    scanf(" %f", &pib);

    printf("Digita la cantidad de polos:  \n");
    scanf("%d", &polos);

    // Cálculos
    densidade = (float)populacao / area;
    pib = pib * 1000000000;       // convertir de miles de millones a reales
    pibpercapita = pib / populacao;

    // Resultados

    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s%02d\n", estado, carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f billones de reais\n", pib / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", polos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    return 0;
}