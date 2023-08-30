#include <stdio.h>
#include <math.h>

int main(void){
    float x1, x2, y1, y2, s;
    printf("Digite o valor de x: ");
    scanf("%f", &x1);
    printf("Digite o valor de x: ");
    scanf("%f", &x2);
    printf("Digite o valor de y: ");
    scanf("%f", &y1);
    printf("Digite o valor de y: ");
    scanf("%f", &y2);
    s = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Essa é a distância no plano: %.2f", s);
    return 0;
}