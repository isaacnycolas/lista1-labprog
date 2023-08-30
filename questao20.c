#include <stdio.h>

int main(void){
    int numero, resultado;
    printf("Digite um número: ");
    scanf("%d", &numero);
    resultado = (numero % 2 == 0) ? 1 : 0;
    if(resultado){
    printf("Número par");
    }else{
    printf("Número ímpar");
    }
  
    return 0;
}