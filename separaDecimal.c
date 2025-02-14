//Ler número real com casas depois da vírgula. Exibir sua parte inteira e sua parte decimal separadas
#include <stdio.h>

int main () {
	float x, decimal;
	int inteira;
	printf ("Informe um valor real a ter sua parte decimal separada: ");
	scanf ("%f", &x);
	inteira = (int)x;
	decimal = x - inteira;
	printf ("\nA parte inteira do valor informado eh: %d\nA parte decimal do valor informado eh: %f", inteira, decimal);
	return 0;
}
