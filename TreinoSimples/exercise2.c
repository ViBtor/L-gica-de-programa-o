#include <stdio.h>
#include <math.h>

int main(){
    float r, cc, ac, ve;//r: raio, cc: comprimento da circunferência, ac: area do circulo, ve: volume da esfera
    const pi = 3.14;
    printf("Digite um valor de raio para o cálculo de comprimento e de area do circulo e de volume da esfera:");
    scanf("%.3f", &r);
    cc = 2 * pi * r;
    ac = pi * r * r;
    ve = (4.000 / 3.000) * pi * r * r * r;
    printf("Raio:%.3f\n", r);
    printf("Comprimento da circunferencia:%.3f\n", cc);
    printf("Area do circulo:%.3f\n", ac);
    printf("Volume da esfera:%.3f", ve);
    return 0;
}
