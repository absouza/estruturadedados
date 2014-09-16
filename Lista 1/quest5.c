// Program: Questão 5
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int b){
    *a += b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    soma(&a, b);
    printf("A = %d\nB = %d\nA+B = %d\n", (a-b),b,a);
    return 0;
}
