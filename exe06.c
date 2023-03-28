/*
Escreva um algoritmo que leia um número e informe se ele é divisível por 5, por 3 ou por 2 ou se não é divisível por nenhum deles.&nbsp;
*/
main(){
    int n;
    printf("Digite um numero");
    scanf("%d", &n);
    if(n % 5 == 0 && n % 3 == 0 && n % 2 == 0){
        printf("Divisivel por 5, 3 e 2");
    }else if (n % 5 == 0 && n % 3 == 0){
        printf("Divisivel por 5 e 3");
    }else if (n % 5 == 0 && n % 2 == 0){
        printf("Divisivel por 5 e 2");
    }else if (n % 3 == 0 && n % 2 == 0){
        printf("Divisivel por 3 e 2");
    }else if (n % 5 == 0 ){
        printf("Divisivel por 5");
    }else if (n % 3 == 0){
        printf("Divisivel por 3");
    }else if (n % 2 == 0){
        printf("Divisivel por 2");
    }else{
        printf("Não é divisivel por estes numeros");
    }
}