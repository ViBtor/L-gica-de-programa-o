#include <stdio.h>
#include <math.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	float angulo;
	printf ("Dig�te o valor de um �ngulo em graus: ");
	scanf ("%f", &angulo);
	printf ("\nSeno: %f", sin (angulo));
	printf ("\nCosseno: %f", cos (angulo));
	printf ("\nTangente: %f", tan (angulo));
	return 0;
}
