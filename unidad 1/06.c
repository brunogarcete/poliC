#include<stdio.h>
#include <stdlib.h>

void procesarNumeros(int,int,int);

int main(int argc,char **argv) {
    procesarNumeros((int)atoi(argv[1]),(int)atoi(argv[2]),(int)atoi(argv[3]));
    return 0;
}

void procesarNumeros(int a,int b,int c) {
    if(c == (a+b)) {
        printf("iguales\n");
    }
}