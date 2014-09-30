// Program: Questão 19
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
	int i, vetor[N], *pont_aux;
	pont_aux = vetor;
	for(i = 0; i < N; i++, pont_aux++)
		scanf("%d",pont_aux);
	for(i = 0; i < N; i++)
		printf("%d", vetor[i]);
	return 0;
}
