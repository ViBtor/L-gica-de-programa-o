#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	float x, y;
	printf ("Insira as coordenadas (x,y) de um ponto: ");
	scanf ("%f%f", &x, &y);
	if (!x && !y) {
		printf ("\nEste ponto est� na origem.\n");
	}else if (!x && y) {
			printf ("\nEste ponto se encontra no eixo y.\n");
	}else if (x && !y) {
			printf ("\nEste valor se encontra no eixo x.\n");
	}else if (x > 0 && y > 0) {
		printf ("\nEste valor se encontra no 1� quadrante.\n");
	}else if (x < 0 && y > 0) {
		printf ("\nEste valor se encontra no 2� quadrante.\n");
	}else if (x < 0 && y < 0) {
		printf ("\nEste valor se encontra no 3� quadrante.\n");
	}else {
		printf ("\nEste valor se encontra no 4� quadrante.\n");
	}
	return 0;
}
