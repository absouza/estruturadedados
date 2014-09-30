// Program: Questão 10
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

void dobro(int *a, int *b){
    *a *= *a;
    *b *= *b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    dobro(&a, &b);
    printf("Dobro a = %d\nDobro b = %d\n", a, b);
    return 0;
}
