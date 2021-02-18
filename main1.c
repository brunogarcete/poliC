// Autor : Bruno Garcete
// Ejercicio 2 : Unidad 1
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
	switch( ( (a+b+c)/3 ) >= 7 ){
	case FALSE :
		printf("Reprobado\n");
		break;
	default :
		printf("Aprobado\n");
		break;
	}
}
