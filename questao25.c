#include <stdio.h>

int main(void){
    int segundos;
    int minutos; 
    int horas;

    printf("Escreva um valor: ");
    scanf("%d", &segundos);

    if(segundos < 60){
    printf("%d sec", segundos);
    } else if(segundos >= 60 && segundos < 3600) {
    minutos = segundos / 60;
    segundos = segundos % 60;
    printf("%d min %d sec", minutos, segundos);
    } else if(segundos >= 3600) {
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;
    printf("%d h %d min %d sec", horas, minutos, segundos);
    }

    return 0;
}