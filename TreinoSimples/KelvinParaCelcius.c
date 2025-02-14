#include <stdio.h>
#include <math.h>
int main(){
    float k, c;
    printf("Insira o valor da temperatura em Kelvin:\n");
    scanf("%f", &k);
    c = k - 273.15;
    printf("\nO valor da temperatura em Celsius: %.2f", c);
    return 0;
}
