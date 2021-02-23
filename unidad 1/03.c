#include<stdio.h>

void introducirNumerosHastaNeg(void);

int main(void) {
	introducirNumerosHastaNeg();
	return 0;
}

void introducirNumerosHastaNeg(void) {
	int numero = 0;
	scanf("%d",&numero);
	if(numero >= 0){
		introducirNumerosHastaNeg();
	}else{
		printf("Se ha introducido un numero negativo\n");
	}
}
