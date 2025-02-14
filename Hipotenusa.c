#include <stdio.h>
#include <locale.h>
#include <math.h>
int main () {
	setlocale (LC_ALL, "");
	float c1, c2, h;
	printf ("insira o valor dos catetos de um triângulo: ");
	scanf ("%f%f", &c1, &c2);
	printf ("\nA hipotenusa correspondente é: %.2f\n", sqrt(c1 * c1 + c2 * c2));
	return 0;
}
