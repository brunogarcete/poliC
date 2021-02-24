#include<stdio.h>
#define tam 15

void ingresarDatos(int *);
void proceso(int *);

int main(void) {
    int numeros[tam];
    ingresarDatos(numeros);
    return 0;
}

void ingresarDatos(int *numeros){
    for (int i = 0; i < tam; i++)
    {
        scanf("%d",(numeros+i));
    }
    proceso(numeros);    
}

void proceso(int *numeros) {
    int pares   = 0;
    int impares = 0;
    for (int i = 0; i < tam; i++)
    {
        if (*(numeros+i)%2==0)
        {
            pares++;
        }else
        {
            impares++;
        }
    }
    printf("Pares = %d , Impares = %d\n",pares,impares);
}