#include <stdio.h>

typedef struct stacknode{
    int info;
    struct stacknode* prox;
}stacknode;

typedef struct stack{
    stacknode* topo;
}stack;

void inicializar(stack* s) {
    s->topo = NULL;
}

int isEmpty (stack s) {
    if(s.topo, NULL){
        return 1;
    }else{
        return 0;
    }
}

int isfull (stack s) {
    return 0;
}

void push(stack &s, int valor) {
    stacknode *novo;
    novo = (stacknode*) malloc(sizeof(stacknode));
    novo->info = valor;
    novo->prox = NULL;
    if(isEmpty(s))==1){
        novo->prox = *s;
        *s = novo;
    }
}

int pop(stack s) {
    stacknode* aux = *s;
    *s = (*s)->prox;
    valor = aux->info;
    free(aux);
    return valor;
}