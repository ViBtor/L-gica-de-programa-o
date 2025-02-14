//calcule e mostre S= 1/10 + 2/9 + 3/8 + ... + 10/1
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	float s=0, n1=1, n2=10;
	while (n1 <= 10) {
		s = s + n1 / n2;
		n1++;
		n2--;
	}
	printf ("\nS: %f", s);
	return 0;
}
