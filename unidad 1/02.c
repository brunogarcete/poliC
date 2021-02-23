#include<stdio.h>

void cargarDatos (int *sueldo,int *antiguedad);
void proceso (int sueldo,int antiguedad);

int main(void) {
	int a = 0;
	int b = 0;
	cargarDatos(&a,&b);
	return 0;
}

void cargarDatos(int *sueldo,int *antiguedad){
	printf("Escribir con el siguiente formato[int sueldo-int antiguedad] ");
	scanf("%d-%d",sueldo,antiguedad);
	proceso(*sueldo,*antiguedad);
}

void proceso (int sueldo,int antiguedad) {
	printf("sueldo : %d-antiguedad : %d\n",sueldo,antiguedad);
	if(sueldo < 1500000 && antiguedad > 10){
		sueldo = sueldo + (20/100)*(sueldo);
		printf("El nuevo sueldo es : %d\n",sueldo);
	}else if(sueldo < 1500000 && antiguedad < 10){
		sueldo = sueldo + (5/100)*sueldo;
		printf("El nuevo sueldo es : %d\n",sueldo);
	}else if(sueldo > 1500000){
		printf("El nuevo sueldo es : %d\n",sueldo);
	}
}
