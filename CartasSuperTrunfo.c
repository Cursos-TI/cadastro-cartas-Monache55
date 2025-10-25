#include <stdio.h>

int main() {
    
    int carta, populacao, polos;
    float area, pib, pibpercapita, densidade;
    char estado[50], cidade[50];

    printf("Digite o numero da sua carta:  \n");
    scanf("%d", &carta);

    printf("Digite a letra do seu Estado:  \n");
    scanf("%s", estado);

    printf("Digite o nome da sua Cidade:  \n");
    scanf(" %49[^\n]", cidade);

    printf("Digite a Populacao da sua Cidade:  \n");
    scanf("%d", &populacao);

    printf("Digita o valor da area da sua Cidade:  \n");
    scanf(" %f", &area);

    printf("Digita o valor do PIB:  \n");
    scanf(" %f", &pib);

    printf("Digita a Cantidade de Polos:  \n");
    scanf("%d", &polos);

    // Cálculos
    densidade = (float)populacao / area;
    pib = pib * 1000000000;       // convertir miles de milhoes a reais
    pibpercapita = pib / populacao;

    // Resultados

    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s%02d\n", estado, carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib / 1000000000);
    printf("Número de Pontos Turísticos: %d\n", polos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    return 0;
}