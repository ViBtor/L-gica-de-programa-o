#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	int pedido;
	float preco_unitario, pagar, quantidade;
	printf ("Especificação			Preço unitário\n100 Cachorro quente			1.100\n101 Bauru simples			1.300\n102 Bauru com ovo			1.500\n103 Hambúrguer				1.100\n104 Cheeseburger			1.300\n105 Refrigerante			1.000\n");
	printf ("\nDigíte o código do lanche: ");
	scanf ("%d", &pedido);
	printf ("\nDigíte a quantidade: ");
	scanf ("%f", &quantidade);
	if (pedido == 100) { 
		printf ("O valor a ser pago é: %.2f", 1.100 * quantidade);
	}else if (pedido == 101) {
			printf ("O valor a ser pago é: %.2f", 1.300 * quantidade);
	}else if (pedido == 102) {
			printf ("O valor a ser pago é: %.2f", 1.500 * quantidade);
	}else if (pedido == 103) {
			printf ("O valor a ser pago é: %.2f", 1.100 * quantidade);
	}else if (pedido == 104) {
			printf ("O valor a ser pago é: %.2f", 1.300 * quantidade);
	}else if (pedido == 105) {
			printf ("O valor a ser pago é: %.2f", quantidade);
	}else {
	}
	return 0;
}
