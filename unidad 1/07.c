#include<stdio.h>
#define tam 20

void proceso(int *);
void comparar(int *);
void printResultados(int,int);

int main(void) {
    int A[tam];
    proceso(A);
    return 0;
}

void proceso (int *array) {
    for (int i = 0; i < tam; i++)
    {
        /* code */
        scanf("%d",&array[i]);
    }
    comparar(array);
}

void comparar (int *array) {
    int mayor5 =  0;
    int menor5 =  0;
    for (int i = 0; i < tam; i++)
    {
        /* code */
        if(array[i] > 5){
            mayor5++;
        }else if(array[i] < 5){
            menor5++;
        }
    }
    printResultados(mayor5,menor5);
    
}

void printResultados(int mayor5 , int menor5) {
    printf("Mayores de 5 = %d y menores de 5 = %d\n",mayor5,menor5);
}