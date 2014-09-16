// Program: Questão 1
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("A = %d\nB = %d", a, b);
    return 0;
}
