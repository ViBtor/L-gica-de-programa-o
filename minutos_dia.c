#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "");
	int horas, minutos;
	printf ("Digíte a hora atual sem os minutos: ");
	scanf ("%d", &horas);
	printf ("\nEntre com os minutos: ");
	scanf ("%d", &minutos);
	minutos = (horas * 60) + minutos;
	printf ("\nO total de minutos no dia é: %d", minutos);
	return 0;
}
