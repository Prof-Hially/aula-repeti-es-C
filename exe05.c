/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float valor;
    int qtdNotas100 = 0, qtdNotas50 = 0, qtdNotas20 = 0, qtdNotas10 = 0, qtdNotas5 = 0, qtdNotas2 = 0;
    int qtdMoedas1 = 0, qtdMoedas50 = 0, qtdMoedas25 = 0, qtdMoedas10 = 0, qtdMoedas5 = 0, qtdMoedas1cent = 0;
    int qtdNotas = 0;
    int qtdMoedas = 0;

    printf("Digite o valor monetario: ");
    scanf("%f", &valor);

    // Cálculo das notas de 100
    if (valor >= 100) {
        qtdNotas100 = valor / 100;
        printf("%d\n", qtdNotas100);
        valor -= qtdNotas100 * 100;
        qtdNotas = qtdNotas + qtdNotas100; //contando quantidade de notas total
    }
    // Cálculo das notas de 50
    if (valor >= 50) {
        qtdNotas50 = valor / 50;
        valor -= qtdNotas50 * 50;
        qtdNotas += qtdNotas50;
    }
    // Cálculo das notas de 20
    if (valor >= 20) {
        qtdNotas20 = valor / 20;
        valor -= qtdNotas20 * 20;
        qtdNotas += qtdNotas20;
    }
    // Cálculo das notas de 10
    if (valor >= 10) {
        qtdNotas10 = valor / 10;
        valor -= qtdNotas10 * 10;
        qtdNotas += qtdNotas10;
    }
    // Cálculo das notas de 5
    if (valor >= 5) {
        qtdNotas5 = valor / 5;
        valor -= qtdNotas5 * 5;
        qtdNotas += qtdNotas5;
    }
    // Cálculo das notas de 2
    if (valor >= 2) {
        qtdNotas2 = valor / 2;
        valor -= qtdNotas2 * 2;
        qtdNotas += qtdNotas2;
    }
    // Cálculo das moedas de 1 real
    if (valor >= 1) {
        qtdMoedas1 = valor / 1;
        valor -= qtdMoedas1 * 1;
        qtdMoedas += qtdMoedas1;
    }

    // Cálculo das moedas de 50 centavos
    if (valor >= 0.50) {
        qtdMoedas50 = valor / 0.50;
        valor -= qtdMoedas50 * 0.50;
        qtdMoedas += qtdMoedas50;
    }

    // Cálculo das moedas de 25 centavos
    if (valor >= 0.25) {
        qtdMoedas25 = valor / 0.25;
        valor -= qtdMoedas25 * 0.25;
        qtdMoedas += qtdMoedas25;
    }

    // Cálculo das moedas de 10 centavos
    if (valor >= 0.10) {
        printf("%f\n", valor);

        qtdMoedas10 = valor / 0.10;
        valor -= qtdMoedas10 * 0.10;
        qtdMoedas += qtdMoedas10;
    }
    // Cálculo das moedas de 5 centavos
    if (valor >= 0.05) {
        qtdMoedas5 = valor / 0.05;
        valor -= qtdMoedas5 * 0.05;
        qtdMoedas += qtdMoedas5;
    }
    printf("Quantidade total de notas = %d e total de moedas = %d", qtdNotas, qtdMoedas);
    printf("\nQuantidade de notas de 100: %d", qtdNotas100);
    printf("\nQuantidade de notas de 50: %d", qtdNotas50);
    printf("\nQuantidade de notas de 20: %d", qtdNotas20);

    printf("\nQuantidade de moedas de 10: %d", qtdMoedas10);
    printf("\nQuantidade de moedas de 5: %d", qtdMoedas5);
return 0;

}