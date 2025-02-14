#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int pares, cont=0;
	while (cont < 99) {
			printf ("%d  ", cont);
			pares += cont;
		cont += 2;	
	}
	printf ("\nSoma dos 50 primeiros pares: %d", pares);
	return 0;
}
