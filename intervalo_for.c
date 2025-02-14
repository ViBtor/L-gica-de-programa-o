//pedir para o usuário 2 valores a e b, exibir os valores no intervalo [a , b] de maneira crescente.
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int i, a, b;
	printf ("\nDigíte dois valores a e b de um intervalo: ");
	scanf ("%d%d", &a, &b);
	for ( ; a > b; b++) {
			printf ("%d ", b);
		}
	for ( ; a <= b; a++) {
			printf ("%d ", a);
		}
	return 0;	
}
