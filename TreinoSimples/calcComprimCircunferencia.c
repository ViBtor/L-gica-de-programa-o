#include <stdio.h>
#include <math.h>

int main (){
    float r, c, a, v, pi=3.14;//r: raio, c: comprimento, a: area, v: volume
    printf("digite o valor do raio da circunferencia:\n");
    scanf("%f", &r);
    c = 2*r*pi;
    printf("o comprimento da circunferencia eh:%f", c);
    return 0;

}
