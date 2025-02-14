//ler o valor do raio, calcular o comprimento da circunferência, a área do círculo
//o volume  da esfera conrrespondentes e exibir os resultados
//comp = 2.PI.r, area = PI.r.r, vol = 4/3.PI.r.r.r
#include <stdio.h>
#define PI 3.1415

int main (){
	float r, comp, area, vol;
	printf ("Digite um valor de raio para obter o circulo, area, comprimento e volume correspondentes: ");
	scanf ("%f", &r);
		comp = 2*PI*r;
		area = PI*r*r;
		vol = (float)4/3*PI*r*r*r;
	printf ("Os valores correspondentes ao raio inserido sao:\ncomprimento = %.2f\narea = %.2f\nvolume = %.2f", comp, area, vol);
	return 0;
}
