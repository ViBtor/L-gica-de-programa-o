#include <stdio.h>
#include <math.h>
int main(){
    float k, m;
    printf("Digite a velocidade em km/h para obte-la em m/s:\n");
    scanf("%f", &k);
    m = k / 3.6;
    printf("\nA velocidade em m/s: %.2f", m);
    return 0;
}
