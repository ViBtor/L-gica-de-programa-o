//para obter o último dígito de um número, basta executar a operação resto por 10. Ler um número inteiro qualquer e obter seu último dígito
#include <stdio.h>

int main (){
	int x = 544, y;
	y = x % 10;
	printf ("O ultimo digito eh: %d", y);
	return 0;
}
