// Program: Questão 11
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

int maior_vetor(int *vet, int tam){
    int i, maior = vet[0];
    for(i = 1; i < tam; i++)
        if(vet[i] > maior)
            maior = vet[i];
    return maior;
}

int main(){
    int i, j, N, K;
    scanf("%d,%d" , &N, &K);
    int vet[N];
    for(i = 0; i < N; i++)
        scanf("%d",&vet[i]);
    for(i = 0, j = 1; i < N; i++, j++)
        if(j == K){
            printf("\n%d\n",vet[i]);
            j = 1;
        }
        else
            printf("%d\n",vet[i]);
    printf("Maior numero = %d\n",maior_vetor(vet, N));
    return 0;
}
