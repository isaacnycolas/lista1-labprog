#include <stdio.h>

int main(void){
    float c;
    printf("Digite a temperatura que deseja converter para F: ");
    scanf("%f", &c);
    c = (9 * c + 160) / 5;
    printf("Este é o valor convertido para F: %.1f", c);
    return 0;
}