#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	float a1, a2, x;
	printf ("Digíte dois valores extremos de um intervalo: ");
	scanf ("%f%f", &a1, &a2);
	printf ("\nDigíte um terceiro valor para saber se está contido no intervalo: ");
	scanf ("%f", &x);
	if (x > a1 && x > a2) {
		printf ("\nO valor NAO está dentro do intervalo");
	}else if (x < a1 && x < a2) {
		printf ("\nO valor NAO está dentro do intervalo");
	}else {
		printf ("\nO valor está dentro do intervalo.");
	}
	return 0;
}
