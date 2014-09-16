// Program: Questão 6
// Autor:	Alana
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2){
    float result = (b * b) - 4 * (a * c);
    if (result<0)
        return 0;
    *x1 = (-(b) + sqrt(result)) / (a * 2);
    *x2 = (-(b) - sqrt(result)) /(a * 2);
    return 1;
}

int main(){
    float a, b, c, x1, x2;
    scanf("%f %f %f", &a,&b,&c);
    printf("Equacao = %2.fx^2 + %2.fx + %2.f\nA = %2.f, B = %2.f, C = %2.f\n", a, b, c, a, b, c);
    if (raizes(a,b,c,&x1,&x2))
        printf("%f %f", x1,x2);
    else
        printf("não tem raízes reais\n");
   return 0;
}
