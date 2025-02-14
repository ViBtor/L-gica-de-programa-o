#include <stdio.h>
#include <math.h>
int main(){
    float c, f;//c: graus celsius; f: fahrenheit
    printf("Digite a temperatura em graus Celsius para obte-la em fahrenheit:\n");
    scanf("%f", &c);
    f = c * (9.0 / 5.0) + 32.0;
    printf("A temperatura convertida para fahrenheit: %.2f", f);
    return 0;
}
