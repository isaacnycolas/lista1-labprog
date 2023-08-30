#include <stdio.h>

int main(void){
    int volume, comprimento, altura, largura;
    printf("Digite o comprimento, a altura e a largura do retângulo: ");
    scanf("%d, %d, %d", &comprimento, &altura, &largura);
    volume = comprimento * altura * largura;
    printf("o volume do retângulo é %d l", volume);
    return 0;
}