// Autor : Bruno Garcete
// Ejercicio 3 : Unidad 1
//
//
//
//
//

#include<stdio.h>
#define FALSE 0

void printResultados(void);

int main(void) {
	printResultados();
	return 0;
}

void printResultados(void) {
	int a,b,c;
	void promedio(int,int,int);
	printf("Escriba tres notas con el formato nota1-nota2-nota3 en la consola\n");
	scanf("%d-%d-%d",&a,&b,&c);
	promedio(a,b,c);
}

void promedio(int a,int b,int c) {
    int prom = ((a+b+c)/3); // Evalua el promedio
    if(prom >=7){
        printf("Aprobado\n");
    }else if(prom >= 4 && prom <7){
        printf("Regular\n");
        }
    else if(prom < 4){
            printf("Reprobado\n");
    }
}
