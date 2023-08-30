#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    int quadrado = pow(x, 2);
    printf("Aqui está o quadrado do número %d: %d \n",x, quadrado);
    printf("Aqui está o triplo do número %d: %d \n", x, (x * 3));
    float xx = (float)x;
    printf("Aqui está o meio do número %.0f: %.1f \n",xx, (xx / 2));
    return 0;
}