#include<stdio.h>
#include<stdlib.h>
#define tam 20

void generarNumeros(int,int,int,int);

int main(void){
	// numero = rand () % (N-M+1) + M;   // Este está entre M y N
	// la funcion generar numeros recibe como parametro desde donde leer hasta donde terminar
	generarNumeros(0,tam,0,0);
	return 0;
}


void generarNumeros(int i,int j,int suma,int promedio) {

	// Declaraciones locales
	int array[tam];

	//trabajo
	array[i] = rand () % (100) + 1;
	suma = suma + array[i];
	printf("%d\n",array[i]);

	// condicion
	if(i < tam){
		// llamada recursiva
		generarNumeros((i+1),tam,suma,promedio);
	}else{
		promedio = (suma/tam);
		printf("suma = %d promedio = %d",suma,promedio);
	}
}
