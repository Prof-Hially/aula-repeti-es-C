#include <stdio.h>
#include <math.h>

main (){
    double n1, n2, res;
    int op;
    printf("Escolha o tipo de operacao:\n 1-soma,\n 2-subtracao,\n 3-divisao,\n 4-multiplicacao\n");
    scanf("%d", &op);

    printf("Agora digite os numeros da operacao\n");
    scanf("%lf %lf", &n1 , &n2);

    switch(op){
        case 1:
            res = n1 + n2;
            printf("Resultado soma: %lf", res);
            break;
        case 2:
            res = n1 - n2;
            printf("Resultado sub: %lf", res);
            break;
        case 3:
            res = n1 / n2;
            printf("Resultado div: %lf", res);
            break;
        case 4:
            res = n1 * n2;
            printf("Resultado multi: %lf", res);
            break;
        default:
            printf("Operacao inválida");  
    }
}