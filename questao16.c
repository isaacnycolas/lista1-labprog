#include <stdio.h>

int main(void){
    float valoraula, horaaula, descontoinss, salario;
    printf("Digite quanto vale a aula: R$");
    scanf("%f", &valoraula);
    printf("Digite quantas horas de aulas trabalhadas: ");
    scanf("%f", &horaaula);
    salario = horaaula * valoraula;
    printf("Esse é o valor do salário bruto: R$  %.2f \n", salario);
    printf("Qual o valor do desconto do INSS?");
    scanf("%f", &descontoinss);
    salario = salario - (salario * descontoinss/100);
    printf("Esse é o valor do salário líquido: R$  %.2f", salario);
    return 0;
}