#include <stdio.h>

int main(void){
int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundos número: ");
    scanf("%d", &n2);
    printf("SOMA: %d\nPRODUTO: %d\nDIFERENÇA: %d\nQUOCIENTE: %d\nRESTO: %d", (n1+n2), (n1*n2), (n1 - n2), (n1/n2), (n1 %n2));
    return 0;
}