#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int num, num1, num2, num3, num_invertido;
	printf ("Insira um n�mero de 3 d�gitos: ");
	scanf ("%d", &num);
	num1 = num % 10;
	num2 = (num / 10) % 10;
	num3 = (num / 100) % 10;
	num_invertido = (num1 * 100) + (num2 * 10) + num3;	
	printf ("\nA invers�o do n�mero �: %d\n", num_invertido);
	return 0;
}
