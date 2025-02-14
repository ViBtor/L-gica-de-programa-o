#include <stdio.h>
#include <math.h>
int main(){
    float g, rad, pi = 3.14;
    printf("Digite um angulo em graus para obte-lo em radianos:\n");
    scanf("%f", &g);
    rad = g * pi / 180.0;
    printf("O valor do angulo em radianos: %f", rad);
    return 0;
}
