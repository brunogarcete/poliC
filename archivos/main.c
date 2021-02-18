/* En esta linea coloque el modo de apertura [lectura por defecto] */
#define modo "r"


/* Coloque la ruta del fichero a leer de ejemplo esta el
fichero donde se encuentran los prototipos si el fichero 
se encuentra fuera de la carpeta del proyecto coloque su 
ruta absoluta  */
#define ruta "prototipos.txt"

/* include */
#include<stdio.h>
/* incluyo el fichero de las funciones */
#include"funciones.c"
int main(void){
    FILE* fichero = fopen(ruta,modo);

        /* Instrucciones */
        mostrarCont(fichero);
        printf("\nLa cantidad de caracteres es : %d\n",(CantLetras(fichero)));
        printf("La cantidad de Lineas es : %d\n",(CantLineas(fichero)));
    
    fclose(fichero);
    /* este es de ejemplo al final es mi practica jaja
    */
    FILE *f2 = fopen("resultado.txt","w");
        //escribirNumeros(f2);
        printf("EScriba caracteres en un archivo\n");
        escribirArchivo(f2);
    fclose(f2);
    return 0;
}