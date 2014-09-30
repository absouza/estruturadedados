// Program: Questão 4
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

void le_notas(float *n1, float *n2){
    scanf("%f %f", n1, n2);
}

float calc_media(float n1, float n2, float *pond){
    *pond = (n1 + n2 * 2) / 3;
    return ((n1 + n2) / 2);
}

void exibe_dados(float n1, float n2, float *pond){
    printf("Nota 1 = %2.f\nNota 2 = %2.f\nMedia Simples = %2.f\n", n1, n2, calc_media(n1, n2, pond));
    printf("Media Ponderada = %2.f\n", *pond);
}

int main(){
    float n1, n2, pond;
    le_notas(&n1, &n2);
    exibe_dados(n1, n2, &pond);
    return 0;
}
