#include <stdio.h>
#include <math.h>
int main(){
    float m, k;//m: milhas, k: quilometros
    printf("Digite uma distancia em milhas para recebe-la em quilometros:\n");
    scanf("%f", &m);
    k = m * 1.61;
    printf("A distancia em quilometros: %.2f", k);
    return 0;
}
