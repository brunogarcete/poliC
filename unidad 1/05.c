#include<stdio.h>
#define tam 10

void generarNumeros(int,int,int,int);

int main(void){
	// numero = rand () % (N-M+1) + M;   // Este está entre M y N
	// la funcion generar numeros recibe como parametro desde donde leer hasta donde terminar
	generarNumeros(0,tam,0,0);
	return 0;
}


void generarNumeros(int i,int j,int mult3,int mult5) {

	// Declaraciones locales
	int numero;

	//trabajo
	scanf("%d",&numero);

	if(numero%3 == 0){
		mult3++;
	}

	if(numero%5 == 0){
		mult5++;
	}
	// condicion
	if(i < tam){
		// llamada recursiva
		generarNumeros((i+1),tam,mult3,mult5);
	}else{
		printf("multiplos de 3 = %d multiplos de 5 = %d",mult3,mult5);
	}
}
