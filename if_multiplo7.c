#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int num;
	printf ("Dig�te um n�mero para saber se � m�ltiplo de 7: ");
	scanf ("%d", &num);
	if (num % 7 == 0) {
		printf ("\nO n�mero � m�ltiplo de 7");
	}
	else {
		printf ("\nO n�mero n�o � m�ltiplo de 7");
	}
	return 0;
}
