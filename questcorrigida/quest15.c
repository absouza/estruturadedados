// Program: Questão 15
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if(&n1 > &n2)
		printf("N1 Possui maior endereco!");
	else
		printf("N2 Possui maior endereco!");
	return 0;
}
