/* Prototipos */
void mostrarCont(FILE* archivo);
int sizef(FILE *fichero);
int CantLineas(FILE *fichero);
void escribirNumeros(FILE *fichero);

/* Lectura */
void mostrarCont(FILE* archivo){
    char caracter;
    while( ( caracter = fgetc(archivo) ) != EOF ){printf("%c",caracter);}
}

int CantLetras(FILE *fichero){
    int tam = 0;
    char caracter;
    rewind(fichero);
    while( ( caracter = fgetc(fichero) ) != EOF ){tam++;}
    return tam;
}

int CantLineas(FILE *fichero){
    int lineas = 0;
    char a[60];
    rewind(fichero);
    while (fgets(a,60,fichero) != NULL)
    {
        /* code */
        lineas++;
    }
    return lineas;
}


/* Escritura */
void escribirNumeros(FILE *fichero){
    for(int caracter = 0;caracter < 10 ;caracter++){
        /* instrucciones*/
        fprintf(fichero,"%d",caracter);
    }
}