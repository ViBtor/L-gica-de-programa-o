#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int a, b, c;
	printf ("Dig�te tr�s valores para os lados de um tri�ngulo:\n");
	scanf ("%d%d%d", &a, &b, &c);
	if (a >= b && c) {
			if (a < b + c) {
				printf ("Estes valores correspondem aos lados de um tri�ngulo!");
			}
			else {
				printf ("Estes valores n�o correspondem aos lados de um tri�ngulo!");	
			}
	}else if (b >= a && c) {
			if (b < a + c) {
				printf ("Estes valores correspondem aos lados de um tri�ngulo!");
			}
			else {
				printf ("Estes valores n�o correspondem aos lados de um tri�ngulo!");
			}	
	}else {
		if (c < a + b) {
			printf ("Estes valores correspondem aos lados de um tri�ngulo!");
		}
		else {	
		printf ("Estes valores n�o correspondem aos lados de um tri�ngulo!");
		}
	}
		return 0;
}
