#include<stdio.h>
#include<stdlib.h>
#include"estructuras.c"
#include"funciones.c"


int main(void){
    persona thais;
    leerPersona(&thais);
    system("clear");
    pPersona(&thais);
    return 0;
}
