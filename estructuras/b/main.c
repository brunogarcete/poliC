#include <stdio.h> // para printf
#include <stdlib.h> // para malloc

typedef struct ns {
    int data;
    struct ns *next;
}node;

node *list_add(node **,int);
void list_remove(node **);
node **list_search(node **,int);
void list_print(node *);


int main(void){
    node *n = NULL;

    list_add(&n, 0); /* lista: 0 */
    list_add(&n, 1); /* lista: 1 0 */
    list_add(&n, 2); /* lista: 2 1 0 */
    list_add(&n, 3); /* lista: 3 2 1 0 */
    list_add(&n, 4); /* lista: 4 3 2 1 0 */
    list_print(n);
    list_remove(&n);            /* borrar primero(4) */
    list_remove(&n->next);      /* borrar nuevo segundo (2) */
    list_remove(list_search(&n, 1)); /* eliminar la celda que contiene el 1 (primera) */
    list_remove(&n->next);      /* eliminar segundo nodo del final(0)*/
    list_remove(&n);            /* eliminar ultimo nodo (3) */
    list_print(n);

    return 0;
}

node *list_add(node **p,int i){
    node *n = (node *)malloc(sizeof(node));
    if(n == NULL){
        return NULL;
    }else{
        n -> next = *p;
        *p = n;
        n -> data = i;
        return n;
    }
}

void list_remove(node **p){
    if(*p != NULL) {
        node *n = *p;
        *p = (*p) -> next;
        free(n);
    }
}

node **list_search(node **n, int i) {
    while (*n != NULL) {
        if ((*n)->data == i) {
            return n;
        }
        n = &(*n)->next;
    }
    return NULL;
}

void list_print(node *n) {
    if (n == NULL) {
        printf("lista esta vacía\n");
    }
    while (n != NULL) {
        printf("print %p %p %d\n", n, n->next, n->data);
        n = n->next;
    }
}