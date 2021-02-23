#include<stdio.h>

float leerNumero(void);
void esEntero(float);
float retornaEntero (float);

int main(void) {
	esEntero(leerNumero());
	return 0;
}

float leerNumero (void) {
	float numero = 0;
	scanf("%f",&numero);
	return numero;
}

void esEntero(float numero) {
	if(numero - retornaEntero(numero) > 0){
		// acciones para numero decimal
		printf("Es Decimal\n");
	}else {
		// acciones para numero entero
		printf("Es Entero\n");
	}
}

float retornaEntero (float ent) {
	float numeroEntero = 0;
	while(ent > 0){
		numeroEntero++;
		ent--;
	}
	return numeroEntero;
}
