#include <stdio.h>

int main(void){
    int horas, minutos, segundos;
    printf("Digite as horas, os minutos e os segundos: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    segundos = (horas * 3600) + (minutos * 60) + segundos;
    printf("o tanto de horas em segundos é %d", segundos);
    return 0;
}