#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int num;
	printf ("Dig�te qualquer n�mero para saber se � m�ltiplo de 4: ");
	scanf ("%d", &num);
	num = num % 100;
	if (num % 4 == 0) {
		printf ("\nO n�mero inserido � m�ltiplo de 4");
	}
	else {
		printf ("\nO n�mero NAO � m�ltiplo de 4");
	}
	return 0;
}
