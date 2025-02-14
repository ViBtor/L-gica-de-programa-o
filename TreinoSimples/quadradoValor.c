#include <stdio.h>
#include <math.h>
int main(){
    float x, xquad;
    printf("Insira um numero real a ser multiplicado por ele mesmo:\n");
    scanf("%f", &x);
    xquad = x * x;
    printf("O quadrado do numero digitado eh: %f", xquad);
    return 0;
}
