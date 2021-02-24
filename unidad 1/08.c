#include<stdio.h>

void proceso (void);

int main(void) {
    proceso();
    return 0;
}

void proceso (void) {
    int mult3 = 0;
    for(int i = 1; i <= 100 ; i++) {
        if(i%3==0) {
            mult3++;
        }
    }
    printf("Los numeros multiplos de 3 = %d\n",mult3);
}