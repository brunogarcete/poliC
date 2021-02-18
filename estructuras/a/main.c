#include<stdio.h>
#include<stdlib.h>

typedef struct ns
{
    /* data */
    int dato;
    struct ns *next;
}nodo;
/* prototipos */
nodo *agregarNodo(nodo **p,int i);
void printList(nodo* p);

int main(void){
    nodo *nodo1;
    agregarNodo(&nodo1,0);
    agregarNodo(&nodo1,1);
    printList(nodo1);
    return 0;
}

nodo *agregarNodo(nodo **p,int i) {
    nodo *n = (nodo *)malloc(sizeof(nodo));
    if (n == NULL)
    {
        return NULL;
    }else{
        n -> next = *p;
        n -> dato = i;
        return n;
    }
}

void printList(nodo* p) {
    if(p == NULL)
        printf("No hay elementos\n");
    while(p != NULL){
        printf("%p , %p , %d\n",p,p->next,p->dato);
        p = p -> next;
    }
}