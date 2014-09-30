// Program: Questão 13
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>

int main(){
	int 	num, 	*pont_int;
	float 	real, 	*pont_float;
	char 	carac, 	*pont_char;
	scanf("%d %f %c",&num, &real, &carac);
	printf("Inteiro = %d \nReal = %f \nCaractere = %c",num,real,carac);
	pont_int 	= &num;
	pont_float 	= &real;
	pont_char 	= &carac;
	scanf("%d %f %c", pont_int, pont_float, pont_char);
	printf("Inteiro = %d \nReal = %f \nCaractere = %c",*pont_int, *pont_float, *pont_char);
	*pont_int   = 	num * 2;
	*pont_float = 	real * 2;
	*pont_char	=	"$";
	printf("Inteiro = %d \nReal = %f \nCaractere = %c",*pont_int, *pont_float, *pont_char);
	return 0;
}
