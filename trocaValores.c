//Ler 2 valores quaisquer  e armazená-los nas variáveis a e b. Trocar os valores entre as variáveis e exibir os resultados
#include <stdio.h>

int main () {
	float a, b, x;
	printf ("Digite 2 valores:\n");
	scanf ("%f%f", &a, &b);
	x = a;
	a = b;
	b = x;
	printf ("\nOs valores digitados e trocados de lugar sao: %f e %f", a, b);
	return 0;
}
