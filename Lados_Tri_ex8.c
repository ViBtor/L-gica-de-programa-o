#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int a, b, c;
	printf ("Digíte três valores para os lados de um triângulo:\n");
	scanf ("%d%d%d", &a, &b, &c);
	if (a >= b && c) {
			if (a < b + c) {
				printf ("Estes valores correspondem aos lados de um triângulo!");
			}
			else {
				printf ("Estes valores não correspondem aos lados de um triângulo!");	
			}
	}else if (b >= a && c) {
			if (b < a + c) {
				printf ("Estes valores correspondem aos lados de um triângulo!");
			}
			else {
				printf ("Estes valores não correspondem aos lados de um triângulo!");
			}	
	}else {
		if (c < a + b) {
			printf ("Estes valores correspondem aos lados de um triângulo!");
		}
		else {	
		printf ("Estes valores não correspondem aos lados de um triângulo!");
		}
	}
		return 0;
}
