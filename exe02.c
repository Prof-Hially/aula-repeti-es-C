/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.*/

#include<stdio.h>
#include<math.h>
main(){
    double taxa = 0;
    double valor, precoFinal;
    int estado;

    printf("Digite o valor do produto");
    scanf("%lf", &valor);
    fflush(stdin);
    printf("Digite o numero do estado correspondente: \n1-MG \n2-SP \n3-RJ \n4-DF");
    scanf("%d", &estado);

    switch(estado){
        case 1:
           taxa = 0.02;
           precoFinal = valor +(valor * taxa); 
           printf("O valor valor do produto em MG e: R$ %.2lf", precoFinal);
        break;
        case 2:
           taxa = 0.03;
           precoFinal = valor +(valor * taxa); 
           printf("O valor valor do produto em SP e: R$ %.2lf", precoFinal);
           break;
        case 3:
           taxa = 0.04;
           precoFinal = valor +(valor * taxa); 
           printf("O valor valor do produto em RJ e: R$ %.2lf", precoFinal);
           break;
        case 4:
           taxa = 0.05;
           precoFinal = valor +(valor * taxa); 
           printf("O valor valor do produto em DF e: R$ %.2lf", precoFinal);
           break;
        default:
            printf("Estado Invalido");
    }
}
