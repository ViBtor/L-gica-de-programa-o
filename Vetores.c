//ler 20 valores inteiros e armazená-los num vetor
//separar os pares num vetor e os ímpares noutro
//mostrar adequadamente os 3 vetores
#include <stdio.h>
#define T 20

int main () {
	int i, j, vet[T], vetpar[T], vetimpar[T];
	
	printf ("\nDigite %d valores inteiros:\n", T);
	
	for (i = 0; i < T; i++) {
		scanf ("%d", &vet[i]);
	}
	
	for (i = 0;i < T;i++) {
		if (vet[i]%2 == 0) {
			for (j = 0; j < T; j++) {
				vetpar[j] = vet[i];
			}
		}else {
			for (j = 0; j < T; j++) {
				vetimpar[j] = vet[i];
			}
		}
	}
	
	printf ("\nValores inseridos:\n");
	for (i = 0; i < T; i++) {
		printf ("| %d |", vet[i]);
	}
	
	printf ("\nValores pares inseridos:\n");
	for (i = 0; i < T; i++) {
		printf ("| %d |", vetpar[i]);
	}
	printf ("\nValores impares inseridos:\n");
	for (i = 0; i < T; i++) {
		printf ("| %d |", vetimpar[i]);
	}
	return 0;
}
