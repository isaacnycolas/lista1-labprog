#include <stdio.h>

int main(void){
    float cotacao, reais, conversao;
    printf("Qual a cotação do dólar: \n");
    scanf("%f", &cotacao);
    printf("Quantos reais a ser convertido? ");
    scanf("%f", &reais);
    conversao = reais / cotacao;
    printf("a conversão é: %.2f", conversao);
    return 0;
}