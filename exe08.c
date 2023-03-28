#include <stdio.h>
int main(void) {
    int codP, codS, codB, calP, calS, calB, caltotal;
    printf("\nCARDÁPIO:"); 
    printf("\nPratos principais:\t");
    printf("\n 1 - Vegetariano - 180 cal\t");
    printf("\n 2 - Peixe - 230 cal\t");
    printf("\n 3 - Frango - 250 cal"); 
    printf("\n 4 - carne - 350 cal \t");

    printf("\n Sobremesas:\t");
    printf("\n 1 - Abacaxi - 75 cal\t");
    printf("\n 2 - Sorvete diet - 110 cal\t");
    printf("\n 3 - Mousse diet - 170 cal"); 
    printf("\n 4 - Mousse chocolate - 200 cal\t");

    printf("\n Bebidas:\t");
    printf("\n 1 - Chá - 20 cal\t");
    printf("\n 2 - Suco de laranja - 70 cal\t");
    printf("\n 3 - Suco de melão - 100 cal"); 
    printf("\n 4 - Refrigerante diet - 65 cal\t");

    printf("\nDigite o prato desejado:\t");
    scanf("%d", &codP);

    switch(codP){
        case 1:
            calP = 180;
            break;
        case 2:
            calP = 230;
            break;
        default:
            printf("Valor invalido");
    }
    printf("\nDigite o a sobremesa desejada:\t");
    scanf("%d", &codS);
    switch(codS){
        case 1:
            calS = 75;
            break;
        case 2:
            calS = 110;
            break;
        default:
            printf("Valor invalido");
    }
    printf("\nDigite o bebida desejado:\t");
    scanf("%d", &codB);
    switch(codB){
        case 1:
            calB = 20;
            break;
        case 2:
            calB = 70;
            break;
        default:
            printf("Valor invalido");
    }
    caltotal = calP + calS + calB;

    printf("O total de calorias consumido é: %d calorias", caltotal);
}