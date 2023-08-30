#include <stdio.h>

int main(void){
    int number;
    printf("Digite um número: ");
    scanf("%d", &number);
    int digit;

    while (number > 0) {
        digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }
  
    return 0;
}