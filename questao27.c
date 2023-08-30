#include <stdio.h>
#include <math.h>

int main(void){
    float x, y, z, mediag, mediaa;
    printf("Digite três números: ");
    scanf("%f %f %f", &x, &y, &z);
    mediaa = (x+y+z)/2;
    mediag = pow(x*y*z, 0.25);
    printf("MEDIA ARITMETICA: %.1f \n", mediaa);
    printf("MEDIA GEOMETRICA: %.2f", mediag);
    return 0;
}