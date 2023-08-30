#include <stdio.h>

int main(void){
    int numero;
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    int valorAbsoluto = numero < 0 ? -numero : numero;
    printf("O valor absoluto de %d é %d\n", numero, valorAbsoluto);
    return 0;
}