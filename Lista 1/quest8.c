// Program: Questão 8
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#define N 5

void maior_vetor(int *vet, int *maior, int *qtd){
    int i;
    *maior = vet[0];
    for(i = 1, *qtd = 1; i < N; i++){
        if(vet[i] == *maior)
            (*qtd)++;
        else if(vet[i] > *maior){
            *maior = vet[i];
            *qtd = 1;
        }
    }
}

int main(){
    int i, vet[N], maior, qtd;
    for(i = 0; i < N; i++)
        scanf("%d",&vet[i]);
    maior_vetor(vet, &maior, &qtd);
    printf("Maior = %d\nQuantidade de repeticoes = %d\n", maior, qtd);
    return 0;
}

