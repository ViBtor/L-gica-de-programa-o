//para obter o �ltimo d�gito de um n�mero, basta executar a opera��o resto por 10. Ler um n�mero inteiro qualquer e obter seu �ltimo d�gito
#include <stdio.h>

int main (){
	int x = 544, y;
	y = x % 10;
	printf ("O ultimo digito eh: %d", y);
	return 0;
}
