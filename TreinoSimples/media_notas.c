#include <stdio.h>
#include <math.h>

int main ()
{
    float nota1, nota2, nota3, m;
    printf("Digite as notas das 3 provas:\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    m = (nota1+nota2+nota3)/3;
    printf("A media das notas eh:%.2f", m);
    return 0;
}
