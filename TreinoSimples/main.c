#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, d;
    printf("digite as coordenadas do ponto P1\n");
    scanf("%f%f", &x1, &y1);
    printf("digite as coordenadas do ponto P2\n");
    scanf("%f%f", &x2, &y2);
    d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    printf("\ndistancia = %.3f\n", d);
    return 0;
}
