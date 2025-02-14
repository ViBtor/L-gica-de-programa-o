#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	float a, b, c, d;
	printf ("Digíte 3 valores em ordem crescente:\n");
	scanf ("%f%f%f", &a, &b, &c);
	printf ("\nInsira um quarto valor:\n");
	scanf ("%f", &d);
	if (d > a) {
		if (d > b) {
			if (d > c) {
				printf ("\nTodos os valores em ordem crescente: %.3f, %.3f, %.3f, %.3f\n", a, b, c, d);
			}else {
				printf ("\nTodos os valores em ordem crescente: %.3f, %.3f, %.3f, %.3f\n", a, b, d, c);
			}
		}else {
			printf ("\nTodos os valores em ordem crescente: %.3f, %.3f, %.3f, %.3f\n", a, d, b, c);
		}
	}else {
		printf ("\nTodos os valores em ordem crescente: %.3f, %.3f, %.3f, %.3f\n", d, a, b, c);
	}
	return 0;
}
