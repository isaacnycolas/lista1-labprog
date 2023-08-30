#include <stdio.h>

int main(void){
    int a = 1, b = 2, c;
    printf("valores atuais: %d e %d \n", a, b);
    c = a;
    a = b; 
    b = c;
    printf("valores trocados: %d e %d", a, b);
    return 0;
}