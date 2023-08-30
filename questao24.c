#include <stdio.h>

int main(void){
    int x, n, resultado;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite um número para a potência: ");
    scanf("%d", &n);
    resultado = x << n;
    printf("%d", resultado);

    return 0;
}