// Program: Questão 3
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int ordena(int *a, int *b, int *c){
    if(*a > *b)
        troca(a,b);
    if(*a > *c)
        troca(a,c);
    if(*b > *c)
        troca(b,c);
    return (*a == *b) && (*b == *c) ? 1:0;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Resultado igual = %d\n", ordena(&a,&b,&c));
    printf("A = %d\nB = %d\nC = %d", a, b, c);
    return 0;
}
