#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	float a, b, c, d, e;
	printf ("Dígite 5 valores quaisquer: ");
	scanf ("%f%f%f%f%f", &a, &b, &c, &d, &e);
	if (a > b && a > c && a > d && a > e) {
		if (b < c && b < d && b < e) {
			printf ("\n%f é o maior valor.\n%f é o menor valor.", a, b);
		}else if (c < b && c < d && c < e) {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", a, c);
		}else if (d < b && d < c && d < e) {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", a, d);
		}else {
			printf ("\n%f é o maior valor.\n%f é o menor valor.", a, e);
		}
	}else if (b > a && b > c && b > d && b > e) {
			if (a < c && a < d && a < e) {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", b, a);
			}else if (c < a && c < d && c < e) {
					printf ("\n%f é o maior valor.\n%f é o menor valor.", b, c);
			}else if (d < a && d < c && d < e) {
					printf ("\n%f é o maior valor.\n%f é o menor valor.", b, d);
			}else {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", b, e);
			}
	}else if (c > a && c > b && c > d && c > e) {
			if (a < b && a < d && a < e) {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", c, a);
			}else if (b < a && b < d && b < e) {
					printf ("\n%f é o maior valor.\n%f é o menor valor.", c, b);
			}else if (d < a && d < b && d < e) {
					printf ("\n%f é o maior valor.\n%f é o menor valor.", c, d);
			}else {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", c, e);
			}
	}else if (d > a && d > b && d > c && d > e) {
			if (a < b && a < c && a < e) {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", d, a);
			}else if (b < a && b < c && b < e) {
					printf ("\n%f é o maior valor.\n%f é o menor valor.", d, b);
			}else if (c < a && c < b && c < e) {
					printf ("\n%f é o maior valor.\n%f é o menor valor.", d, c);
			}else {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", d, e);
			}
	}else {
		if (a < b && a < c && a < d) {
			printf ("\n%f é o maior valor.\n%f é o menor valor.", e, a);
		}else if (b < a && b < c && b < d) {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", e, b);
		}else if (c < a && c < b && c < d) {
				printf ("\n%f é o maior valor.\n%f é o menor valor.", e, c);
		}else {
			printf ("\n%f é o maior valor.\n%f é o menor valor.", e, d);
		}
	}
	return 0;
}
