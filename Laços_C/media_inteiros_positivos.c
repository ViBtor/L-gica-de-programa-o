#include <stdio.h>

int  main () {
	int n, cont=0;
	float media;
	while (cont < 10) {
		printf ("\nDig�te um inteiro positivo: ");
		scanf ("%d", &n);
		if (n > 0) {
			media += n;
			cont++;
		}
	}
	media = media / 10;
	printf ("\nM�dia: %d", media);
	return 0;
}
