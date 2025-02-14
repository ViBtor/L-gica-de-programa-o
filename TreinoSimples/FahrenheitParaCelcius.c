#include <stdio.h>
#include <math.h>
int main(){
    float f, c;
    printf("Insira a temperatura em Fahrenheit:\n");
    scanf("%f", &f);
    c = 5.0 * (f - 32.0) / 9.0;
    printf("\nA temperatura convertida para Celsius: %.2f", c);
    return 0;
}
