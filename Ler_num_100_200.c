#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "");
	float num;
	printf ("Dig�te um valor a ser verificado entre 100 e 200: ");
	scanf ("%f", &num);
	if (num < 100) {
		printf ("\nO valor est� abaixo de 100.\n");
	}
	else if (num < 200) {
			printf ("\nO valor est� entre 100 e 200.\n");
	}
	else {
		printf ("\nO valor � maior ou igual a 200.\n");
	}
	return 0;
}
