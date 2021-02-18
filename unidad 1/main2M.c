// Autor : Bruno Garcete
// Ejercicio 3 : Unidad 1
//
//
//
//
//

#include<stdio.h>
#include<stdlib.h>


void printResultados(int, char**);

int main(int argc,char** argv) {
	printResultados(argc,argv);
	return 0;
}

void printResultados(int cantArg, char**envArgs) {
	int a = atoi(envArgs[1]);
	int b = atoi(envArgs[2]);
	int c = atoi(envArgs[3]);
	void promedio(int,int,int);
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
