
// Program: Questão 17
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
	int 	i;
	float 	vet[N];
	for(i = 0; i < N; i++)
		printf("%x", &vet[i] & 0xff);
	return 0;
}
