//Ler 2 valores quaisquer  e armazen�-los nas vari�veis a e b. Trocar os valores entre as vari�veis e exibir os resultados
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
