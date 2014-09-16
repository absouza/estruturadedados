// Program: Questão 7
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac){
    *inteiro = (int) num;
    *frac = (num - *inteiro);
}

int main(){
    float num, fracionario;
    int inteiro;
    scanf("%f", &num);
    frac(num, &inteiro, &fracionario);
    printf("Numero = %.2f\nParte Inteira = %d\nParte Fracionaria = %.2f\n", num, inteiro, fracionario);
    return 0;
}
