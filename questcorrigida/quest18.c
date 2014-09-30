// Program: Questão 18
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(){
	int 	i, j;
	float 	vet[N][N];
	scanf("%f" &N);
	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			printf("%f", &vet[i][j] & 0xff);
	return 0;
}
