/*Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:&nbsp;
61 - Brasília&nbsp;
71 - Salvador&nbsp;
11 - São Paulo&nbsp;
21 - Rio de Janeiro&nbsp;
32 - Juiz de Fora&nbsp;
19 - Campinas&nbsp;
27 - Vitória&nbsp;
31 - Belo Horizonte&nbsp;
Qualquer outro - uma cidade no Brasil sem identificação&nbsp;*/

#include<stdio.h>
#include<math.h>
main(){
    int ddd;

    printf("Digite o DDD de uma cidade");
    scanf("%d", &ddd);

    switch(ddd){
        case 61:
            printf("O DDD é da cidade de Brasilia");
            break;
        case 71:
            printf("O DDD é da cidade de Salvador");
            break;
        case 11:
            printf("O DDD é da cidade de Sao Paulo");
            break;
        default:
            printf("O DDD de uma cidade sem identificacao");
    }

}