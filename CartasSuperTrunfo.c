#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int carta, populacao, polos;
    float area, pib, densidade;
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
    scanf("%f", &area);

    printf("Digita el valor del PIB:  \n");
    scanf("%f", &pib);

    printf("Digita la cantidad de polos:  \n");
    scanf("%d", &polos);

    if (area != 0)
        densidade = populacao / area;
    else
        densidade = 0;

    printf("\n===== RESULTADOS =====\n");
    printf("El numero de tu Carta es: %d\n", carta);
    printf("La letra de tu Estado es: %s\n", estado);
    printf("El Codigo de tu Carta es: %s%02d\n", estado, carta);
    printf("El Nombre de la Ciudad es: %s\n", cidade);
    printf("La Poblacion de la Ciudad es: %d\n", populacao);
    printf("El valor del PIB es: %.2f\n", pib);
    printf("La Cantidad de polos Turisticos es: %d\n", polos);
    printf("La Densidad Poblacional es: %.2f\n", densidade);

    return 0;
}