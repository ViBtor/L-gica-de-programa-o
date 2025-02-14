//ler um vetor com 10 valores inteiros
//encontrar o maior valor par desse vetor
#include <stdio.h>
#include <locale.h>
#define T 10
int main () {
	setlocale (LC_ALL, "");
	int v [10], i, j, mp;
	printf ("\nDigíte %d valores inteiros:\n", T);
	for (i=0; i < T; i++) {
		printf ("\nvalor %d: ", i);
		scanf ("%d", &v[i]);
	}
	i=0;
	while (i<T && v[i]%2 != 0) {
		i++;
	}
	if (i < T) {
		mp = v[i];
		for (j=i+1; j < T; j++){
			if (!(v[j]%2) && mp < v[j]) {
				mp = v[j];
			}
		}
	}
	else {
		printf ("\nNão foi digitado nenhum número par!\n");
	}
	printf ("\nMaior par: %d\n", &mp);
	return 0;
}
