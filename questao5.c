#include <stdio.h>
#include <math.h>

int main(void){
    float conta;
    printf("Digite o valor da conta: ");
    scanf("%f", &conta);
    conta = conta + (conta * 1/10);
    printf("%.2f", conta);
    return 0;
}