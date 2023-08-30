#include <stdio.h>

int main(void){
    int a, b;
    puts("Escreva dois números: ");
    scanf("%d %d", &a, &b);

    printf("Seu número %s", (a % b) ? "NÃO é múltiplo!" : "É um múltiplo");
  
    return 0;
}