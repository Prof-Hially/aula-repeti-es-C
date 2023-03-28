/*
Leia uma quantidade indeterminada de duplas de
valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados
em ordem crescente ou decrescente. O programa deve
finalizar quando forem digitados dois valores iguais. 
*/
#include <stdio.h>
int main() {

    int i, n, soma = 0, x;
    printf("Digite a quantidade de numeros que devem ser digitados");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("Digite um numero");
        scanf("%d", &x);
        soma = soma + x;
    }
    printf("%d",soma);
    
}