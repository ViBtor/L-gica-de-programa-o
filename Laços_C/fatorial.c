//ler um inteiro entre 0 e 12 (inclu�dos), validar com do-while
//cacular e mostrar fatorial do n�mero lido(while):
//!n = n * n - 1 * n - 2 * ... * 1
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int n, fat=1, cont=1;
	do {
		printf ("\nDig�te um inteiro entre 0 e 12 (inclu�dos): ");
		scanf ("%d", &n);
	} while (n < 0 || n > 12);
	while (cont <= n) {
		fat = fat * cont;
		cont++;
	}
	printf ("\nFatorial de %d: %d", n, fat);
	return 0;
}
