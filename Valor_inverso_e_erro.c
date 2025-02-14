#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	float x;
	printf ("Digíte um número real a ser invertido: ");
	scanf ("%f", &x);
	if (x != 0) {
		printf ("\n\nO inverso do valor informado é: 1 / %.1f", x);
	}
	else {
		printf ("\nEste valor computa erro!\n");
	}
	return 0;
}
