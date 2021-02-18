#pragma once
#include<string.h>
#include"estructuras.c"

/* Esta funcion lee los campos de una estructura llamada persona */
void leerPersona(persona* a){
    string aux[60];
    printf("Ingrese su cedula\n");
    scanf("%d",&a->cedula);
    printf("Ingrese su nombre\n");
    scanf("%s",aux);
    strcpy(a->nombre,aux);
    printf("Ingrese su fecha de nacimiento con este formato[dia-mes-año]\n");
    scanf("%d-%d-%d",&a->fechaNac.dia,&a->fechaNac.mes,&a->fechaNac.anio);

}
/* procedimiento que imprime los campos de una estructura llamada persona*/
void pPersona(persona *b){
    printf("%d\n",b->cedula);
    printf("%s\n",b->nombre);
    printf("%d\n",b->fechaNac.dia);
    printf("%d\n",b->fechaNac.mes);
    printf("%d\n",b->fechaNac.anio);
}