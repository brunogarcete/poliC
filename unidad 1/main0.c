#include<stdio.h>
#define FALSE 0


void leeNumeros(void);

int main(void){
    leeNumeros();
    return 0;
}


void leeNumeros(void){
    // Bloque de declaraciones
    int a,b;
    void compara(int,int);
    // Tarea
    printf("Ingrese dos numeros separados por el simbolo - sin espacios\n");
    scanf("%d-%d",&a,&b);
    compara(a,b);
}

void compara(int a, int b) {
    switch (a>b)
    {
    case FALSE/* constant-expression */:
        /* code */
        break;
    default:
        printf("La suma es : %d",(a+b));
        break;
    }
}
