#include <stdio.h>

int main(void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    numero = numero * numero;
    printf("O quadrado desse número é %d", numero);
    return 0;
}