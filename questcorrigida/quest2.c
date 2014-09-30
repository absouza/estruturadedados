// Program: Questão 2
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    return a > b ? a : b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Maior = %d", maior(a,b));
    return 0;
}
