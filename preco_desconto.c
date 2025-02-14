#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	float preco, preco_final, desconto;
	printf ("Insira o preço do produto: ");
	scanf ("%f", &preco);
	printf ("\nEntre com o percentual de desconto: ");
	scanf ("%f", &desconto);
	preco_final = (preco * (100 - desconto)) / 100;
	desconto = (preco * desconto) / 100;
	printf ("\n\nPreço com desconto: %.2f\nDesconto: %.2f\n", preco_final, desconto);
	return 0;
}
