#include <stdio.h>

int main(void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("%d, %d & %d", numero-1, numero, numero+1);
    return 0;
}