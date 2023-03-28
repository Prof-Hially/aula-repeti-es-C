/*Construa um algoritmo para determinar se o
indivíduo esta com um peso favorável. Essa
situação é determinada através do IMC (Índice de
Massa Corpórea), que é definida como sendo a
relação entre o peso (PESO) e o quadrado da
Altura (ALTURA) do indivíduo. */
#include<stdio.h>

main(){

    double peso, altura, imc;

    printf("Digite o peso");
    scanf("%lf", &peso);
    printf("Digite a altura");
    scanf("%lf", &altura);

    imc = peso/(altura * altura);
   // imc = peso/(pow(altura,2));
   printf("%lf",imc);

   //estrutura condicional ou de decisão - if else aninhada
   if(imc < 16){
        printf("Magreza grave");
   }else if (imc >= 16 && imc < 17){
        printf("Magreza moderadamente");
   }else if(imc >= 17 && imc < 18.5){
        printf("Magreza leve");
   }else if (imc >= 18.5 && imc < 25){
        printf("Saudavel");
   }else if (imc >= 25 && imc < 30){
        printf("Sobrepeso");
   }else if (imc >= 30 && imc < 35){
        printf("Obesidade grau I");
   }else if (imc >= 35 && imc < 40){
        printf("Obesidade grau II");
   }else{
        printf("Obesidade grau III");
   }

}

