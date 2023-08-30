#include <stdio.h>

int main(void){
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);
    printf("Número com apenas uma casa decimal: %.1f\n", numero);
    return 0;
}