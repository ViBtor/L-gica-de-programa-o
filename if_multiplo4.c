#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int num;
	printf ("Digíte qualquer número para saber se é múltiplo de 4: ");
	scanf ("%d", &num);
	num = num % 100;
	if (num % 4 == 0) {
		printf ("\nO número inserido é múltiplo de 4");
	}
	else {
		printf ("\nO número NAO é múltiplo de 4");
	}
	return 0;
}
