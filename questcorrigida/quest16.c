// Program: Quest�o 16
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if(&n1 > &n2)
		printf("%d", n1);
	else
		printf("%d", n2);
	printf("Numero de maior endereco");
	return 0;
}
