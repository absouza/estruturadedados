// Program: Questão 20
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
	int i, vet[N];
	for(i = 0; i < N; i++)
		scanf("%d",&vet[N]);
	for(i = 0; i < N; i++)
		if(vet[i] % 2 == 0)
			printf("%d\n", &vet[i]);
	return 0;
}
