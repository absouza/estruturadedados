// Program: Questão 12
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

void maior_menor_vetor(int *vet, int tam, int *min, int *max){
    int i;
    *min = *max = vet[0];
    for(i = 0; i < tam; i++){
        if(vet[i] > *max)
            *max = vet[i];
        if(vet[i] < *min)
            *min = vet[i];
    }
}

int main(){
    int i, N, min, max;
    scanf("%d",&N);
    int vet[N];
    for(i = 0; i < N; i++)
        scanf("%d\n",vet[i]);
    maior_menor_vetor(&vet,&N,&min,&max);
    printf("Menor numero = %d\n Maior numero = %d\n",min,max);
return 0;
}
