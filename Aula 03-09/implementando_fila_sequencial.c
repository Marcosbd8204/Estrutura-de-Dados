// Aplicação para testar a Stack implementada

// Arquivo "TestaStackInt.cpp" criado na pasta (folder) "UsoPilha"

#include <stdio.h>
#include "..\Aula 03-09\fila_sequencial.h"

void exibirOpcoes () {
    printf ("Opções \n");
    printf ("1 - Empilhar \n");
    printf ("2 - Desempilhar \n");
    printf ("3 - Ver topo \n");
    printf ("0 - Encerrar programa \n");
    printf ("Informe a opção desejada: ");
}

int main () {
    queue pilha1;
    int num, op;

    inicializar(&pilha1);
    do {
        exibirOpcoes();
        scanf ("%d",&op);
        switch (op) {
            case 1: if (isFull (pilha1) == 1) {
                        printf ("Stack full! \n");
                    }
                    else {
                        printf ("Informe o valor a ser empilhado: ");
                        scanf ("%d",&num);
                        push (&pilha1,num);
                    }
                    break;
            case 2: if (isEmpty (pilha1) == 1) {
                        printf ("Stack empty! \n");
                    }
                    else {
                        num = pop (&pilha1);
                        printf ("Valor desempilhado: %d \n", num);
                    }
                    break;
            case 3: if (isEmpty (pilha1) == 1) {
                        printf ("Stack empty! \n");
                    }
                    else {
                        num = top (pilha1);
                        printf ("Valor no topo da pilha: %d \n", num);
                    }
                    break;
            case 0: printf ("Bye bye \n");
                    break;
            default: printf ("Opção inválida \n");
        }
    } while (op != 0);
    return 0;
}