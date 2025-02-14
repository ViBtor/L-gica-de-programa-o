//Sejam a e b os catetos de um triângulo retângulo. Calcular sua hipotenusa h
#include <stdio.h>
#include <math.h>

int main () {
	float a, b, h;
	printf ("Informe o valor dos 2 catetos de um triangulo retangulo:\n");
	scanf ("%f%f", &a, &b);
		h = sqrt(a * a + b * b);
	printf ("\nA hipotenusa correspondente aos catetos informados eh: %f", h);
	return 0;
}
