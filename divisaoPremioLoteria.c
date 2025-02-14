#include <stdio.h>

int main () {
	float premio = 780000.00, amigo1, amigo2, amigo3;
	amigo1 = (premio / 100) * 46.00;
	amigo2 = (premio / 100) * 32.00;
	amigo3 = (premio / 100) * 22.00;
	printf ("\nO valor a ser recebido pelo primeiro amigo: %.2f\nO valor a ser recebido pelo segundo amigo: %.2f\nO valor a ser recebido pelo terceiro amigo: %.2f", amigo1, amigo2, amigo3);
	return 0;
}
