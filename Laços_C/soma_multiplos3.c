#include <stdio.h>
#include <locale.h>
//ler um valor n>0 (validar), depois ler mais n numeros e somar os multiplos de 3
//um dos la�os com while e o outro com do-while
int main () {
	setlocale (LC_ALL, "");
	int n, cont=0, num, soma=0, mult3;
	do {
		printf ("\nDig�te um inteiro positivo: ");
		scanf ("%d", &n);
	} while (n<=0);
	printf ("\nDig�te %d n�meros: ", n);
	while (cont < n) {
		scanf ("%d", &num);
		if (!(num%3)) {
			soma = soma + num;
			mult3++;
		}
	cont++;
	}
	printf ("\nQuantidade de m�ltiplos de 3: %d", mult3);
	printf ("\nSoma dos m�ltiplos de 3: %d", soma);
	return 0;
}
