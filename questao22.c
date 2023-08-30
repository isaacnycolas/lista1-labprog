#include <stdio.h>

int main(void){
    for (int i = 0; i <= 127; i++) {
        if (i >= 32 && i <= 126) {
            printf("%c\t\t%d\n", i, i);
        }
    }
  
    return 0;
}