#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc,char**argv) {
    void proceso(int,int);
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    proceso(a,b);
    return 0;
}

void proceso(int x,int y) {
    if(fmod((double)x,(double)y) == 0){
        printf("Es divisor\n");
    }else{
        printf("No es divisor\n");
    }
}