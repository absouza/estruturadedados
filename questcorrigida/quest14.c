// Program: Questão 14
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
	int i, vet[N], *pont_vet;
	pont_vet = vet;
	pont_vet++;
	for(i = 0; i < N; i++, pont_vet++)
		scanf("%d",*pont_vet);
	for(i = 0; i < N; i++)
		printf("%d\n", vet[i]);
	return 0;
}
