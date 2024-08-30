//Questão 2
#include <stdio.h>
#include "C:\Users\aluno\Documents\Estrutura de Dados\Marcos Vinicius\Exemplo de Pilha\Exemplo da Aula\Biblioteca.h"

void ConverterBinario(int n){
int quoc, resto;
Stack pilha;
inicializar(&pilha);
while (n != 0){
    quoc = n/2;
    resto =  n%2;
    if (isfull (pilha)==0){
        push (&pilha,resto);
    }else{
        printf ("erro. stack full");
        return;
    }
    n=quoc;
}
while (isEmpty(pilha)==0){
    result = pop (&pilha);
    printf("%d",result)
}
printf ("\n");   
}

int main(){
    int n;
    printf ("Digite o numero que sera converitdo em binario");
    scanf("%d",&n);
    ConverterBinario(n);
    return 0;
}