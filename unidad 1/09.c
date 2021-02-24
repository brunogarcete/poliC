#include<stdio.h>

void proceso(void);
void compara(int);

int main(void) {
    proceso();
    return 0;
}

void proceso(void) {
    int numero = 0;
    scanf("%d",&numero);
    compara(numero);
}

void compara (int numero) {
    if(numero > 0) {
        printf("Es positivo\n");
    }else if(numero < 0)
    {
        printf("Es negativo\n");
    }
    
}