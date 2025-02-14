#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int num;
	printf ("Digíte um número para saber se é múltiplo de 7: ");
	scanf ("%d", &num);
	if (num % 7 == 0) {
		printf ("\nO número é múltiplo de 7");
	}
	else {
		printf ("\nO número não é múltiplo de 7");
	}
	return 0;
}
