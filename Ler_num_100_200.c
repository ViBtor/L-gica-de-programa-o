#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "");
	float num;
	printf ("Digíte um valor a ser verificado entre 100 e 200: ");
	scanf ("%f", &num);
	if (num < 100) {
		printf ("\nO valor está abaixo de 100.\n");
	}
	else if (num < 200) {
			printf ("\nO valor está entre 100 e 200.\n");
	}
	else {
		printf ("\nO valor é maior ou igual a 200.\n");
	}
	return 0;
}
