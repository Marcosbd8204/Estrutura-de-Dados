#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct Queue{
    int dados;
    int inicio, fim;
}queue;

void inicializar(queue *f){
    f->inicio=0;
    f->fim=0;
}

int isempyt(queue f){
    if(f.inicio>f.fim){
        return 1;
    }else{
        return 0;
    }
}

int isfull(queue f){
    if(f.fim == TAM-1){
        return 1;
    }else{
        return 0;
    }    
}

void enQUEUE(queue *f, int valor){
    f->fim++;
    f->dados[f->fim]=valor;
}

void deQUEUE(queue *f){
    int retorno=f->dados[f->inicio];
    for(int i=0; i< f->fim; i++){
        f->dados[i]= f->dados[i+1];
    }
    f->fim--;
    return retorno;
}