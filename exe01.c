
/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o número digitado ao quadrado e raiz quadrada do número digitado.*/

#include<stdio.h>
#include<math.h>
main(){
    
    double numero, raiz, quadrado;

    printf("Digite um numero");
    scanf("%lf", &numero);

    if (numero >= 0){
        raiz = sqrt(numero);
        //quadrado = numero * numero;
        quadrado = pow(numero,2);
        printf("A raiz quadrada é  %.2lf e o quadrado é %.2lf", raiz, quadrado);
    }else{
        printf("O numero digitado é negativo");
    }


}