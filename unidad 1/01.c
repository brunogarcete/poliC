// se ingresan por teclado tres numeros, si al menos uno de los valores ingresados
// es menor a 10, imprimir en pantalla la leyenda "alguno de los numeros es menor a 10"
// autor: Bruno Garcete
#include<stdio.h>
#define tam 3

/* el codigo fuente esta divido por funciones */

// prototipos
void proceso (int *vector);
void cargarVector(int *vector);
void printResultados(int);

int main(void){
	int vector[tam];
	cargarVector(vector);
	proceso(vector);
	return 0;
}

void cargarVector(int *vector) {
	for(int i=0;i<tam;i++){
		printf("vector %d : ",i);
		scanf("%d",&vector[i]);
	}
}

void proceso(int *vector) {
	int cantidad_de_menores_que_diez = 0;
	for(int i=0;i<tam;i++){
		if(vector[i] < 10){
			cantidad_de_menores_que_diez++;
		}
	}
	printResultados(cantidad_de_menores_que_diez);
}

void printResultados(int cantidad_de_control) {
	if(cantidad_de_control > 0 && cantidad_de_control <= 3)
		printf("alguno de los numeros es menor a 10\n");
}
