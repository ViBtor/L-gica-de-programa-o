#include <stdio.h>
#include <math.h>
int main(){
    float m, k;
    printf("Insira a velocidade em m/s para obte-la em km/h:\n");
    scanf("%f", &m);
    k = m * 3.6;
    printf("A velocidade em km/h: %.2f", k);
    return 0;
}
