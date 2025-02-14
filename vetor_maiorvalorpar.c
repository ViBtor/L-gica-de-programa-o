//ler um vetor com 10 valores inteiros
//encontrar o maior valor par desse vetor
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int v [10], i, j, mp;
	printf ("\nDigite 10 valores inteiros:\n");
	for (i=0; i < 10; i++) {
		printf ("\nvalor %d: ", i);
		scanf ("%d", &v[i]);
	}
	i=0;
	while (i<10 && v[i]%2 != 0) {
		i++;
	}
	if (i < 10) {
		mp = v[i];
		for (j=i+1; j < 10; j++){
			if (v[j]%2 == 0 && mp < v[j]) {
				mp = v[j];
			}
		}
		printf ("\nMaior valor par encontrado: %d\n", mp);
	}
	else {
		printf ("\nNão foi encontrado nenhum valor par\n");
	}
	return 0;
}
