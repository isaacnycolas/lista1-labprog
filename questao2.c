#include <stdio.h>

int main(void){
   
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Valor em hexadecimal: %X \n", numero);
    printf("Valor em octal: %o", numero);
    return 0
}