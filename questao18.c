#include <stdio.h>

int main(void){
    float raio;
    printf("Qual o valor do raio? ");
    scanf("%f", &raio);
    printf("O valor do diâmetro é %.2f \n", (raio * 2));
    printf("O valor da circunferência é %.2f \n", (raio * 2 * 3.14159));
    printf("O valor da área é %.2f \n", (raio * raio * 3.14159));
    return 0;
}