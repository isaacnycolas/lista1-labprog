#include <stdio.h>

int main(void){
    int dias;
    float salario;
    printf("Quantos dias o funcionário trabalhou? ");
    scanf("%d", &dias);
    if (dias > 10 && dias <= 20) {
    salario = ((dias * 50.25) * 2 / 10);
    printf("Esse é o valor do salário bruto: %.2f \n", salario);
    salario = salario - (salario * 1 / 10);
    printf("Esse é o valor do salário líquido: %.2f", salario);
    } else if (dias > 20) {
    salario = ((dias * 50.25) * 3 / 10);
    printf("Esse é o valor do salário bruto: %.2f\n", salario);
    salario = salario - (salario * 1 / 10);
    printf("Esse é o valor do salário líquido: %.2f", salario);
    } else {
    salario = (dias * 50.25);
    salario = salario - (salario * 1 / 10);
    printf("Esse é o valor do salário líquido: %.2f", salario);
    }
    return 0;
}