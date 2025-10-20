#include <stdio.h>

int main(){
    
    int carta, populacao , polos ;
    float area , pib ;
    char estado[50] , codigo , cidade ;
    
    printf("Digite el numero de su carta:  \n" );
    scanf("%d", &carta);
    printf("Digite la letra de su Estado:  \n" );
    scanf("%s", &estado);
    printf("Digite el nombre de la Ciudad:  \n" );
    scanf("%s", &cidade);
    printf("Digite la Poblacion de la Ciudad:  \n" );
    scanf("%d", &populacao);
    printf("Digita el valor del area de la ciudad:  \n" );
    scanf("%f", &area);
    printf("Digita el valor del PIB:  \n" );
    scanf("%f", &pib);
    printf("Digita la cantidad de polos:  \n" );
    scanf("%d", &polos);


    printf("El numero de tu Carta es : %d\n", carta);
    printf("La letra de tu Estado es : %s\n", estado);
    printf("El Codigo de tu Carta es : %s0%d\n", estado, carta);
    printf("El Nombre de la Ciudad es : %s\n", cidade);
    printf("La Poblacion de la Ciudad es : %d\n", populacao);
    printf("El valor del PIB es : %f\n", pib);
    printf("La Cantidad de polos Turisticos es : %d\n", polos);

    return 0 ;
}   
