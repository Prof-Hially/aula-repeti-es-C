/*
7.O cardápio de uma lanchonete é o seguinte:&nbsp;

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.
*/

#include <stdio.h>
int main(void) {
    int cod, qtd;
    float valorPagamento;

    printf("\n\t CARDÁPIO:"); 
    printf("\n100 - Cachorro quente - R$ 10.10");
    printf("\n101 - Bauru simples - R$ 8.30");
    printf("\n102 - Bauru com ovo - R$ 8.50"); 
    printf("\n103 - Hamburguer - R$ 12.50");
    printf("\n104 - Cheeseburguer - R$ 13.25");

    printf("\nDigite o item desejado:");
    scanf("%d", &cod);
    
    switch(cod){
        case 100:
            printf("\nQuantos itens deseja pedir:");
            scanf("%d", &qtd);
            valorPagamento = qtd * 10.10;
            printf("\nO valor pago pelo lanche será: %lf", valorPagamento);
            break;
        case 101:
            printf("\nQuantos itens deseja pedir:");
            scanf("%d", &qtd);
            valorPagamento = qtd * 8.30 ;
            printf("\nO valor pago pelo lanche será: %lf", valorPagamento);
            break;
        default:
            printf("\nCodigo invalido");
    }
}