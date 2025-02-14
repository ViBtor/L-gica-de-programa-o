#include <stdio.h>
#include <math.h>
int main(){
    float c, k;
    printf("Insira o valor da temperatura em graus Celsius:\n");
    scanf("%f", &c);
    k = c + 273.15;
    printf("\nA temperatura convertida para Kelvin nos da o valor: %.2f", k);
    return 0;
}
