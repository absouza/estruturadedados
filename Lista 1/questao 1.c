// Programa: Troca valor de A em B
// Autor: Alana Bispo

#include <stdio.h>
#include <stdlib.h>

void trocaValor(int *A, int *B){
    int aux;
    aux = *A;
    *A = *B;
    *B = aux;
}

int main(){
    // Declaração variaveis
    int A, B;

    // Recebe valores
    scanf("%d",&A);
    scanf("%d",&B);

    // Troca os valores da função
    trocaValor(&A, &B);

    // Imprime resultado
    printf("%d novo A, %d novo B",A,B);

    return 0;
}
