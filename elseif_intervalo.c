#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	float a1, a2, x;
	printf ("Dig�te dois valores extremos de um intervalo: ");
	scanf ("%f%f", &a1, &a2);
	printf ("\nDig�te um terceiro valor para saber se est� contido no intervalo: ");
	scanf ("%f", &x);
	if (x > a1 && x > a2) {
		printf ("\nO valor NAO est� dentro do intervalo");
	}else if (x < a1 && x < a2) {
		printf ("\nO valor NAO est� dentro do intervalo");
	}else {
		printf ("\nO valor est� dentro do intervalo.");
	}
	return 0;
}
