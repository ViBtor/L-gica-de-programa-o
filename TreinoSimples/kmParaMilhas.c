#include <stdio.h>
#include <math.h>
int main(){
    float k, m;
    printf("Insira uma distancia em quilometros para obte-la em milhas:\n");
    scanf("%f", &k);
    m = k / 1.61;
    printf("A distancia em milhas: %.2f", m);
    return 0;
}
