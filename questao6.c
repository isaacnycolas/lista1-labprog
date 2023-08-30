#include <stdio.h>

int main(void){
    char sexo;
    float altura;
    float pesoideal;
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);
    switch (sexo) {
    case 'M':
    pesoideal = 72.7 * altura - 58;
    printf("Seu peso ideal deveria ser: %.2f", pesoideal);
    break;
    case 'F':
    pesoideal = 62.1 * altura - 47.7;
    printf("Seu peso ideal deveria ser: %.2f", pesoideal);
    break;
    default:
    pesoideal = 72.7 * altura - 58;
    printf("Seu peso ideal deveria ser: %.2f", pesoideal);
    break;
    return 0;
}