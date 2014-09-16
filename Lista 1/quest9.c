// Program: Questão 9
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#define N1 4
#define N2 4

int soma_vetores(int *vet1, int *vet2, int *vet_res){
    int i;
    if(N1 != N2)
        return 0;
    for(i = 0 ; i < N1; i++, vet1++, vet2++, vet_res++)
        *vet_res = *vet1 + *vet2;
    return 1;
}

int main(){
    int i, vet1[N1], vet2[N2], vet_res[N1];
    for(i = 0; i < N1; i++)
        scanf("%d", &vet1[i]);
    for(i = 0; i < N2; i++)
        scanf("%d", &vet2[i]);
    if(soma_vetores(vet1, vet2, vet_res)){
        for(i = 0; i < N1; i++)
            printf("%d\n", vet_res[i]);
        printf("Vetor resultante.\n");
    }
    else
        printf("Tamanho incompativeis!");
    return 0;
}
