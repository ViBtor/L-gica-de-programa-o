#include <stdio.h>
#include <math.h>
int main(){
    int x, y, z, soma;
    printf("Digite tres valores inteiros a serem somados:\n");
    scanf("%d %d %d", &x, &y, &z);
    soma = x + y + z;
    printf("\nSoma: %d", soma);
    return 0;
}
